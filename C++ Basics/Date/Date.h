#include <string>
#include <iostream>

class Date{
public:

    explicit Date(int day_, int month_, int year_) {
        // initilize theh Date object
        if (month_  <= 12){
            month = month_;
        }
        else{
            month = 1;
        }

        // initialize the day
        if (day_ <= 31){
            day = day_;
        }
        else{
            day = 1;
        }

        // initialize the year
        year = year_;
        // end of the initializser
    }

    void displayDate() const{
        // print out the Date object ib the console
        std::cout << getDay() << "/" << getMonth() << "/" << getYear() << std::endl;
    }

    // creae theh get ans set methods
    void setDay(int day_){
        if (day_ <= 31){
            day = day_;
        }
    }

    void setMonth(int month_){
        if (month_ <= 12){
            month = month_;
        }
    }

    int getMonth() const{ return month;}

    int getDay() const{ return day;}

    int getYear() const{ return year;}

private:
    // declare the Date objevct data members
    unsigned int day{0};
    unsigned int month{0};
    unsigned int year{0};


};