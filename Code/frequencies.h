#include <Arduino.h>
#include "arduinoFFT.h" //https://github.com/kosme/arduinoFFT.git

#define SAMPLES 256  // Número de muestras para el análisis
#define SAMPLING_FREQUENCY 10000 // Frecuencia de muestreo en Hz

arduinoFFT FFT = arduinoFFT(); // Instancia de la clase arduinoFFT para el análisis de frecuencias

double vReal[SAMPLES]; // Vector para almacenar las partes reales de las muestras
double vImag[SAMPLES]; // Vector para almacenar las partes imaginarias de las muestras

double freq() {
  // Leer muestras del micrófono y almacenarlas en vReal
  for (int i = 0; i < SAMPLES; i++) {
    vReal[i] = analogRead(34); // Lee una muestra del pin 34
    vImag[i] = 0.0;
  }

  // Aplicar FFT
  FFT.Windowing(vReal, SAMPLES, FFT_WIN_TYP_RECTANGLE, FFT_FORWARD);
  FFT.Compute(vReal, vImag, SAMPLES, FFT_FORWARD);
  FFT.ComplexToMagnitude(vReal, vImag, SAMPLES);

  // Encontrar la frecuencia dominante
  double peak = FFT.MajorPeak(vReal, SAMPLES, SAMPLING_FREQUENCY);
  return peak;
}