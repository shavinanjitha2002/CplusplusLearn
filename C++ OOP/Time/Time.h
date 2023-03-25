
// time.h
// 2001/09/30
// user shavin anjith
#include <string>

#ifndef TIME_H
#define TIME_H

class Time{
public:
    
    Time(int, int, int);
    Time(int);
    Time(int, int);
    Time();

    
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;

    std::string getUniversalFormat() const;
    std::string getStandardFormat() const;

private:

    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};


};

#endif