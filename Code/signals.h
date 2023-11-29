//
//  signals.h
//  TutorialCPP
//
//  Created by Alberto Pacheco-González on 18/09/23.
//

#ifndef signals_h
#define signals_h

#include <vector>
#include <string>

// Definición de valores constantes para frecuencias y parámetros de señales
#define FA_MIN 900 // Valor mínimo para frecuencia tipo A
#define FA_MAX 1500 // Valor máximo para frecuencia tipo A
#define FB_MIN 200 // Valor mínimo para frecuencia tipo B
#define FB_MAX 600 // Valor máximo para frecuencia tipo B
#define num_frames 25 //Cantidad de frecuencias por patrón
#define DELAY 100 // Valor de la espera entre consulta de frecuencia

using namespace std;

// Definición de tipos para trabajar con arreglos de señales y símbolos
using SignalArray = vector<string>;
using SymbolsArray = vector<char>;

// Declaración de la función para crear señales
string create_signal();

#endif /* signals_h */
