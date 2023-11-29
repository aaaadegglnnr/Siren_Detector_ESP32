//
//  detect.cpp
//  TutorialCPP
//
//  Created by Alberto Pacheco-González on 19/09/23.
//

#include "detect.hpp"
#include <regex>

static regex hi_lo(".*(a{2,7}b{2,7}){2,}"); // private detection-pattern

bool detect(string s) { // public detection API
    return regex_search(s, hi_lo);
}
