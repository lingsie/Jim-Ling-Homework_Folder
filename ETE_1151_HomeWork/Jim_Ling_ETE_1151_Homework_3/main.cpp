// main.cpp

// bring in libraries
#include <iostream>
#include <iomanip>

// helpers

// pi
constexpr double PI = 3.1415926;

// square areas
double square_area(double width) {
    return width * width;
}

// rectangle area
double rectangle_area(double length, double width) {
    return length * width;
}

// circle area
double circle_area(double radius) {
    return PI * radius * radius;
}

// volume of a cylinder
double cylinder_volume(double radius, double height) {
    return PI * radius * radius * height; //volume, can not be area, or maybe surface area???
}

// to get user input, easy to use
double user_input() {
    int choice;
    double h = 0.0 , w = 0.0, l = 0.0, r = 0.0;

    std::cout << "Hi, Welcone to use."
              << "Select shape to calculatre:\n"
              << "1. Area of a square (A)\n"
              << "2. Area of a rectangle (A)\n"
              << "3. Area of a circle (A)\n"
              << "4. Volume of a cylinder (V)\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
        std::cout << "Enter Width: ";
        std::cin >> w;
        return square_area(w);
        case 2:
        std::cout << "Enter length: ";
        std::cin >> l;
        std::cout << "Enter width: ";
        std::cin >> w;
        return rectangle_area(l, w);
        case 3:
        std::cout << "Enter radius: ";
        std::cin >> r;
        return circle_area(r);
        case 4:
        std::cout << "Enter radius: ";
        std::cin >> r;
        std::cout << "Enter height: ";
        std::cin >> h;
        return cylinder_volume(r, h);
        default:
            std::cout << "Invaild choice 403\n";
            return -1.0;
    }
}

// main function
int main() {
    double total_area = user_input();

    if (total_area >= 0) {
        std::cout << std::fixed << std::setprecision (2);
        std::cout << "OK 200, Total area: " << total_area << std::endl;
    } else {
        std::cout << "Progrem ERROR 500\n";
    }
    // End
    return 0;
}