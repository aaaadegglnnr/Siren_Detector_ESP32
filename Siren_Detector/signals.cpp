//
//  signals.cpp
//  TutorialCPP
//
//  Created by Alberto Pacheco-González on 19/09/23.
//

#include <iostream>
#include <thread>
#include <chrono>

// Incluyendo los archivos de encabezado necesarios
#include "signals.h"
#include "frequencies.h"

using namespace std;

char get_tone(double frequency) {
  // Clasificación de frequencias, High (A), Low (B) y fuera de rango (-)
    if (FA_MIN <= frequency && frequency <= FA_MAX) {
        return 'a';
    } else if (FB_MIN <= frequency && frequency <= FB_MAX) {
        return 'b';
    }
}

string create_signal() { // simulate sample input
    string signal = "";
    for (int i = 0; i < num_frames; i++) {
        double frequency = freq(); //llamada a función para obtener una frecuencia 
        char tone = get_tone(frequency); //clasificación de la frecuencia
        signal += tone; //concatenar el caracter a la cadena
        this_thread::sleep_for(chrono::milliseconds(DELAY)); //pausa para detectar toda la señal de la sirena en toda la cadena
    }
    return signal;
}
