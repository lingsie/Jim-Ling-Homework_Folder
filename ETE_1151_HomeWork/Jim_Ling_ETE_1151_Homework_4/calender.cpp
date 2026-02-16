// calender.cpp


// bring in
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>

// too much stds
using namespace std;



// function check for leap
 bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); // a leap year can /4 but can not be /100, but can be /400
 }


// get num of days for a mun
// I can write 12 if for this :)
int getNumDays(int month, int year) {
    switch(month) {
        case 2: return isLeapYear(year) ? 29 : 28;
        case 4: case 6: case 9: case 11: return 30;
        default: return 31;
    }
}


// get the start day of a month
// to find out the start day of year
int getStartDate(int year) {
    int d = 1 , m = 1, y = year; // use zeller's method
    if (m < 3) {
        m += 12;
        y--;
    } 
    int k = y % 100;
    int j = y / 100;
    int f = d + (13*(m + 1))/5 + k +k/4 +j/4 + 5*j;
    return (f % 7 + 6) % 7; // to mak Mon to be the firest day woll be easier
}




// print month title
// print days with aligment
void printOutMonth(int month, int year, int& start_day) {
    static const string months[] = {
        "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };

    int days = getNumDays (month, year);
    cout << "-- " << months[month] << " " << year << " --" << endl;
    cout << "   Mon  Tue  Wed  Thu  Fri  Sat  Sun" << endl;

    // for loop
    for (int i = 0; i < start_day; ++i) {
    cout << setw(5) << "";
    }

    for (int day = 1; day <= days; ++day) {
        cout << setw(5) << day;
        start_day = (start_day + 1) % 7;
        if (start_day == 0) cout << endl; // new week
    }
    if (start_day != 0) cout << endl; // to end line
    cout << endl;
}



// main()
int main() {
    int year;
    cout << "Please enter a year: ";
    cin >> year;

    int start_day = getStartDate(year); // find out the 1/1
    cout << "\nCalinder for: " << year << "\n" << endl;

    for (int month = 1; month <= 12; ++ month) {
        printOutMonth(month, year, start_day);
    }

    // End
    return 0;
}
