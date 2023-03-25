#include <iostream>
#include <string>

#ifndef TIME_H
#define TIME_H

class Time{
    // declare hte friend function for time
    friend std::ostream& operator>>(std::ostream& , Time&);
    friend std::istream& operator<<(std::istream&, Time&);


public:
    Time(unsigned int = 0, unsigned int = 0, unsigned int = 0);
    // declare the getter ans setters
    void set_hour(int);
    void set_minute(int);
    void set_second(int);

    int get_hour() const;
    int get_minute() const;
    int get_second() const;

    // declare the print function and to string function
    std::string to_string() const;
    void toUniversalTime() const;
    void toStandardTime() const;

    // declare the other utility function
    void tick(); // increment the time by second


private:
    // declare the member varibles
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif