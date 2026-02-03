// utils.h
// for declare

//declare
#include "utils.h" 

// bring in libraries
#include <bitset>
#include <sstream>
#include <iomanip>
#include <cstdint>
#include <iostream>

// def()
// 8 bit == char (kind of like VARCHAR)
std::string charIntoBinary(char c) {
    std::cout << "Converting char " << std::endl;
    return std::bitset<8>(c).to_string(); // output == str
}

// 32 bit == int 
std::string intIntoBinary(int num) {
    std::cout << "Converting int " << std:: endl;
    return std::bitset<32>(num).to_string(); // output == str
}

// same 32 bit
std::string floatIntoBinary(float num) {
    std::cout << "onverting float" << std:: endl;
    union {
        float input;
        uint32_t output;
    } data;
    data.input = num;
    return std::bitset<32>(data.output).to_string(); // output == str
}
