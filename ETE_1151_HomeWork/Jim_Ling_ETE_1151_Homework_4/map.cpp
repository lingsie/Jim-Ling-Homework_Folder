// map.cpp

// bring in libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std; // too much std :D

// global map size
int map_width; //half
int map_height; //half


// make a map
void create_map() {
    map_width = rand() % 6 + 5; // 5-10 units
    map_height = rand() % 6+5; // 5-10 units
}

// to check position is valid
bool location_valid(int x, int y) {
    return (x >= -map_width && x <= map_width) && 
           (y >= -map_height && y <= map_height); 
}


// main()
int main() {
    srand(time(0));
    create_map();

    string username;
    int x, y;

    cout << "Welcome to use. Please enter your name. "; // input name
    getline(cin, username);
    cout << "Please enter your location point (x y): "; // user input location
    cin >> x >> y;

    cout << "Hi, " << username << "!\n";

    // find out the user is inside the map
    if (location_valid(x, y)) {
        cout << "You are inside the map!!\n";
    } else {
        cout << "You are outside the map!\n";
    }

    // End
    return 0;
}