#include <iostream>
#include <string>

#include "Time.h"

using namespace std;

int main(){
    // create the new Time object
    Time time;
    // print the time
    cout << "time from Universal and Standard Formats : " << endl;
    time.toUniversalTime();
    cout << endl;
    time.toStandardTime();

    for (unsigned int i{0}; i < 70 ; i++){
        time.tick();
        time.toStandardTime();
        cout << endl;
    }


}