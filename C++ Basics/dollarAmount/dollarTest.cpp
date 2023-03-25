#include <iostream>
#include <iomanip>
#include <cmath>
#include "dollarAmount.h"

using namespace std;

int main(){
    // create the DolraAmoutn objec
    DollarAmount d1{12045};
    DollarAmount d2{45712};

    cout << "after add the d1 (" << d1.toString() << ") to the d2 (" << d2.toString() << ") ";
    // add the d1 to teh d2
    d1.add(d2);
    cout << " ,d1  = " << d1.toString() << endl;


    // present the subtract
    cout << "aftre the substract the d2 (" << d2.toString() << ") from the d1 (" << d1.toString() <<
            ") ";
    // sub the d1 from d2
    d1.sub(d2);
    cout << ", d1 = " << d1.toString() << endl;

    // get the user input for interste rate
    cout << "\n\nEnter interest rate as rate and divisor . as the following Examples\n"
            <<"for      2% enter : 2 100\n" 
            <<"for    2.3% enter : 23 1000\n" 
            <<"for   2.37% enter : 237 10000\n" 
            <<"for  2.375% enter : 2375 100000\n" 
            <<"for 2.3758% enter : 23758 1000000\n";

    int rate;
    int divisor;
    cin >> rate >> 
    divisor;

    // initliaze the dollar amount object
    DollarAmount balance{100000};
    cout << "\nInitial Balance : " << balance.toString() << endl;

    cout << "\nYear" << setw(20) << "Amount of deposite" << endl;

    for (unsigned int i = 0; i <= 5; i++){
        balance.addInterest(rate, divisor);
        // dispplay the current balance 
        cout << setw(4) << i << setw(20) << balance.toString() << endl;
    }


}