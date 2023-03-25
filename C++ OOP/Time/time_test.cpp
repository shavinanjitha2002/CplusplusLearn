#include <string>
#include <iostream>
#include <stdexcept>

#include "Time.h"

using namespace std;

void displayTime(const string& message , const Time&  time){
    cout << message << endl;
    cout << "time in universal format : " << time.getUniversalFormat() << endl;
    cout << "time in standard format : " << time.getStandardFormat() << endl;
    cout << endl;
}

int main(){
    // creaet the tim eobject
    Time t;
    displayTime("initilaize Time", t);


    t.setTime(5, 45, 6);
    displayTime("time 1", t);

    t.setTime(7, 8, 44);
    displayTime("after modify", t);

    try{
        t.setTime(44, 5, 66);
    }
    catch (exception& excep){
        cout << excep.what() << endl;
    }

    displayTime("after try catch block" , t);

    // create the refer and pointer to the time object
    Time& timeRef = t;
    Time* timePoniter = &t;

    cout << "time referece : " << timeRef.getStandardFormat() << endl;
    cout << "time poniter : " << timePoniter->getStandardFormat() << endl;

    // create the const time object
    const Time constTime(5, 44, 55);
    // cal to the const member function via the const object
    cout << "hour of the const time is " << constTime.getHour() << endl;
    cout << "standard format of const time " << constTime.getStandardFormat() << endl;

    // call to the non const member function of the time object
    // cmoplie time error raising
}