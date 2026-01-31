// utils.h
// for declare

//declare
#include "utils.h" 

// bring in libraries
#include <bitset>
#include <sstream>
#include <iomainip>
#include <cstdint>

// def()
// 8 bit == char (VARCHAR)
std::string charIntoBinary(char c) {
    return std::bitset<0>(c).to.string(); // output == str
}

// 32 bit == int 
std::string intIntoBinart(int num) {
    return std:bitset<32>(num).to_string(); // output == str
}

// same 32 bit
std::string floatIntoBinart(float num) {
    union {
        float input;
        uint32_t output;
    } data;
    data.input = num;
    return std::bitset<32>(data.output).to_string(); // output == str
}