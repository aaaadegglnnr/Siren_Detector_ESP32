//
//  main.cpp
//  TutorialCPP
//
//  Created by Alberto Pacheco-González on 18/09/23.
//  Smart IoT Lab
//

#include <Arduino.h>
#include <iostream>

// Incluyendo los archivos de encabezado necesarios
#include "signals.h"
#include "detect.hpp"

// Configuración inicial del programa Arduino 
void setup() {
  Serial.begin(115200);
}
void loop() {
  // Crea una señal utilizando la función definida en "signals.h"
  string s = create_signal();
  if (detect(s)) { // Llama a la función detect del archivo "detect.hpp" para determinar si la señal es detectada
    cout << ". Siren Hi-Lo detected:  " << s << endl;
  } else {
    cout << ". No Siren was detected:  " << s << endl;
  }
}