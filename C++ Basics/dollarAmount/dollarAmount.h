#include <cmath>
#include <string>

class DollarAmount{
public:
    // create the initializer mthod
    explicit DollarAmount(int64_t value) : amount{value} {};

    // create the add and subtract methods
    void add(DollarAmount other){
        amount += other.amount;
    }

    void sub(DollarAmount other){
        amount -= other.amount;
    }

    // createt the interest method 
    void addInterest(int rate, int divisor){
        // create the new DOllar Amoutn interst object
        DollarAmount interst{
            (rate * amount + divisor / 2) / divisor
        };

        // add to teh current value
        add(interst);
    }

    // create htheh string represent of object
    std::string toString(){
        // seperate the main and cents
        std::string dollars{std::to_string(amount / 100)};
        std::string cents{std::to_string(std::abs(amount % 100))};

        return "$" + dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
    }


private:
    // declare the local varaibles
    int64_t amount;
};