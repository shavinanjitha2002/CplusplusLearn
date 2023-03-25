#include <iostream>
#include <iomanip>

using namespace std;

int main(){

// declare the varaibles
    unsigned int gradeCounter{0};
    int index;
    // declare the pass anf fail students counter
    int pass{0};
    int fail{0};

    while(gradeCounter < 10){
        // ask from the user enter the pass or fail
        cout << "Enter the marks (1 for Pass || 2 for Fail) for student No." << gradeCounter << " >>> ";
        cin >> index;

        while (index != 1 && index != 2){
            // ask the user again
            cout << "Enter the marks (1 for Pass || 2 for Fail) for student No." << gradeCounter << " >>> ";
            cin >> index;
        }

        // add to te the total
        if (index  == 1){
            pass++;
        }
        else{
            fail++;
        }
        // incease the grade counter
        gradeCounter++;
    }

    // diaply the report
    cout << "Pass Students : " << pass << endl;
    cout << "Failed Students : " << fail << endl;

    if (pass >= 8){
        cout << "*** BONUS:: upgrade to the next level ***";
    }

}