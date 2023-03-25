#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

int main(){

    // get the user inputs for new Date Object
    int year, day, month;
    cout << "Enter the Year >>> ";
    cin >> year;

    cout << "Enter the Month >>> ";
    cin >> month;

    cout << "Enter the Day >>> ";
    cin >> day;

    // create the new Date Object
    Date date(day, month, year);

    // print the date
    date.displayDate();

    return 0;

}