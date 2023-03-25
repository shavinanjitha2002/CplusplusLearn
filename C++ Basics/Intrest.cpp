#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    cout << setprecision(2) << fixed;

    // create the account 
    double principle{0};
    double interest{0};

    cout << "Enter the amout of Principle Deposite >>> ";
    cin >> principle;

    cout << "Enter the Interest Rate(%) >>> ";
    cin >> interest;

    // display the applications headers
    cout << "\nYear" << setw(20) << "Amount of Deposite" << endl;

    for (unsigned int year{1}; year <= 10; year++){
        // calculate the deposite and polee
        double value = principle * pow(1 + interest/100, year);
        // display the values
        cout << setw(4) << year << setw(20) << value << endl;


    }

}