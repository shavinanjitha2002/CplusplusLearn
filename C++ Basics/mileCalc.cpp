#include <iostream>
#include <iomanip>

using namespace std;

int main(){

// declaer the varables
    unsigned int totMiles{0};
    unsigned int totGaloons{0};

    // get the  user inputt from the user
    cout << "\nEnter the miles driven (-1 for quit) >>> ";
    int miles;
    cin >> miles;

    while (miles != -1){
        // add to teh total 
        totMiles += miles;
        // get the number of galons that be raised
        cout << "Enter the Galloons >>> ";
        int gallon;
        cin >> gallon;
        // add to the total galons integer
        totGaloons += gallon;

        // display the report of the curren time
        double currentMPG = static_cast<double>(gallon) / miles;
        double totoMPG = static_cast<double>(totGaloons) / totMiles;

        cout << "current MPG : " << setprecision(4) << fixed;
        cout << currentMPG << endl;
        cout << "Average MPG : " << totoMPG << endl;

        cout << "\nEnter the miles driven (-1 for quit) >>> ";
        cin >> miles;
        // end of the while loop
    }

}