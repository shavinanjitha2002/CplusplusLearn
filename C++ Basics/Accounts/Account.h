#include <string>

class Account{
public:

    // create the initializer for class for initialize the name
    explicit Account(std::string accName, int accBalance) : name{accName} {
        // this is an empty initializer body
        if (accBalance >= 0){
            balance  = accBalance;
        }
    }

    void setName(std::string accName){
        name = accName;
    }

    std::string getName() const{
        return name;
    }

    // create the method for gt and deposite htheh money
    void deposite(int money){
        if (money >= 0){
            balance += money;
        }
    }

    int getBalance() const{
        return balance;
    }

private:
    std::string name;
    int balance{0};

};