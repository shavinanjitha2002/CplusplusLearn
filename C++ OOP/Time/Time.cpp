#include <iomanip>
#include <string>
#include  <sstream>
#include <stdexcept>

#include "Time.h"

using namespace std;

Time::Time() : Time{0, 0, 0} {}

Time::Time(int h) : Time{h ,0, 0} {}

Time::Time(int h, int m) : Time{h, m, 0} {}

Time::Time(int h, int m, int s){
    setTime(h, m, s);
}
void Time::setTime(int h, int m ,int s){
    // set the hour
    setHour(h);
    setMinute(m);
    setSecond(s);

}

void Time::setHour(int h){
    if (h < 0 || h >= 24){
        throw invalid_argument("hour is between 0-24");
    }
    hour = h;
}

void Time::setMinute(int m){
    if (m < 0 || m >= 60){
        throw invalid_argument("minute only get between 0-60");
    }
    minute = m;
}

void Time::setSecond(int s){
    if (s < 0 || s >= 60){
        throw invalid_argument("second must be between 0-60");}

    second = s;
}


string Time::getUniversalFormat() const{
    // return the string repreentatino of time in universal format
    ostringstream time_text;
    time_text << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << ":"
            << setfill('0') << setw(2) << second;

    return time_text.str();

}

string Time::getStandardFormat() const{

    ostringstream time_text;
    time_text << setfill('0') << setw(2) << ((hour <= 12) ? hour : (hour - 12)) << ":"
                << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) <<second << ":"
                << ((hour <= 12)? "AM" : "PM");
    return time_text.str();

}

// getter methods
unsigned int Time::getHour() const{return hour;}

unsigned int Time::getMinute() const{return minute;}

unsigned int Time::getSecond() const{return second;}

