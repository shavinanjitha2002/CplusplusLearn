#include <iostream>
#include <iomanip>
#include <string>
#include <ostream>

#include "Time.h"

using namespace std;

Time::Time(unsigned int h , unsigned int m, unsigned int s){
    // initialize the hour minute and seconf
    set_hour(h);
    set_minute(m);
    set_second(s);

}

void Time::set_hour(int hour){
    if (hour < 0 || hour > 24){
        throw invalid_argument("hour must be in the 0 and 24");
    }
    this->hour = hour;
}

void Time::set_minute(int minute){
    if (minute < 0 || minute > 59){
        throw invalid_argument("minute must be in the 0 and 59");
    }
    this->minute = minute;
}

void Time::set_second(int second){
    if (second < 0 || second > 59){
        throw invalid_argument("seconf must be in the 0 and 59");
    }
    this->second  = second;
}

// implement the getter
int Time::get_hour() const {return hour;}
int Time::get_minute() const{return minute;}
int Time::get_second() const{return second;};

// impleement to_string and print function
string Time::to_string() const{
    // create the string stream
    ostringstream text;
    text << setfill('0')  << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
    return text.str();
}

void Time::toUniversalTime() const{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) <<  minute << ":" << setw(2) << second;

}

void Time::toStandardTime() const{
    cout << setfill('0') << setw(2) << (hour <= 12 ? hour : (hour - 12)) << ":"
        << setw(2) << minute << ":" << setw(2) << second << (hour <= 12 ? "AM" : "PM");
}

// declare the tick membeer function
void  Time::tick(){
    // increment the time by second
    if (second < 59){
        second++;
    }
    else if (minute < 59){
        minute++;
        second = 0;
    }
    else if (hour < 23){
        hour++;
        second = 0;
        minute = 0;
    }
    else{
        hour = 0;
        minute = 0;
        second = 0;
    }
}

ostream& operator>>(ostream& out , Time& time){
    out << setfill('0') << setw(2) << time.hour << ":" << setw(2) 
            << time.minute << ":" <<  setw(2) << time.second;
    return out;
}

istream& operator<<(istream& in , Time& time){
    in >> time.hour;
    in.ignore();
    in >> time.minute;
    in.ignore();
    in >> time.second;

    return in;
}