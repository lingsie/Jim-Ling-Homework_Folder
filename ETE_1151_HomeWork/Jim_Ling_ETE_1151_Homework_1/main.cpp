// main.cpp
// create_app () in python

// bring in lib & utils
#include <iostream>
#include <string>
#include <cctype>
#include "utils.h"

// def main()
int main() {
    // user enter value and welcome page
    std::string input;
    std::cout << "########## Welcome to use :), please enter value. ##########: ";
    std::cin >> input;

    if (input.find('.') != std::string::npos) {
        try{
            float F = std::stof(input);
            std::cout << "Result: " << floatIntoBinary(F) << std::endl;
        } catch (...) { // catch(e) in js, except
            std::cerr << "Input is invalid" << "ERR 500 ";
        }
    }  else {
        try {
            int I = std::stoi(input);
            std::cout << "Result: " << intIntoBinary(I) << std::endl;
        }catch (...) {
            if (input.length() == 1) {
                std::cout << "Result: " << charIntoBinary(input[0]) << std::endl;
            }else{
                std::cerr << "Input is invalid " << "ERR: 500 ";
            }
        }
    }
    std::cout << "End" << std::endl;
    return 0;
}

// End
