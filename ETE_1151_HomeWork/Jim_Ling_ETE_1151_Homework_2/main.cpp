// main.cpp
// bring in lib
#include <iostream>
#include <string>
#include <algorithm> // change input to lowercase


// make a function change to lowercase


// def()
int main() {
    std::string country; // const country

    std::cout << "Hey, where do you live?" << std::endl;
    std::getline(std::cin, country); // usr input country



    // lower?? otherwise Usa == failed 
    std::string count = LowerC(country);

    // answer
    if (count == "usa"){
        std::cout << "I've heard great things about USA, I'd like to go sometime. " << std::endl;
    } else{
        std::cout << "I don't know about that country yet, let me learn about it :D. " << std::endl;
    }

    std::cout << "Emd" << std::endl;
    return 0;
}
// Emd