Siren Detection System using ESP32 and C++
==========
This project is a Siren Detection System implemented on an ESP32 platform using C++. The system aims to identify the presence of a specific siren pattern characterized by alternating high and low frequencies. The project includes components for signal generation, frequency analysis, and pattern detection.

## Components
* **main.cpp**: The main program file that initializes the ESP32 setup and continuously loops to generate a signal using the create_signal() function from signals.h. It calls the detect() function from detect.hpp to determine if the generated signal contains the predefined siren pattern.
* **detect.cpp and detect.hpp**: Contains the logic for siren pattern detection using regular expressions. The detect function checks if a given string matches the predefined pattern.
* **frequencies.h**: Defines frequency ranges for high (A) and low (B) tones, along with the number of frames and delay between frequency queries.
* **signals.cpp and signals.h**: Implements signal generation using the create_signal() function, which simulates input by classifying frequencies into high (A) and low (B) tones based on predefined ranges.
* **arduinoFFT**: Utilizes the arduinoFFT library (https://github.com/kosme/arduinoFFT.git) to perform Fast Fourier Transform (FFT) on analog signals received from a microphone connected to pin 34. The dominant frequency is then extracted to generate the signal.

## How to Use
* Set up your ESP32 board and connect a microphone to pin 34.
* Upload the code to the ESP32 using the Arduino IDE or preferred development environment for ESP32.
* Open the serial monitor to view detection results.
* If a Siren Hi-Lo pattern is detected, the program will display a corresponding message.

## Notes
* Ensure that the arduinoFFT library is properly installed before uploading the code.
* Adjust frequency ranges in frequencies.h for specific siren patterns.

## Contributors
* Alberto Pacheco-González
* José Ángel Gándara Carrillo 338702
* Kevin Alonso Holguín Solis 338735
* Kevin Antonio Cárdenas Piña 339060

### Feel free to contribute, report issues, or suggest improvements to enhance the functionality of this Siren Detection System on ESP32.
