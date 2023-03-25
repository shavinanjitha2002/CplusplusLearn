#include <string>
#include <iostream>

#ifndef CLIENT_H
#define CLIENT_H

class Client{
public:
    Client(unsigned int = 0 , const std::string& = "" , const std::string& = "", double = 0.0);
    // create the setter
    void setFirstName(const std::string&);
    void setLastName(const std::string&);
    void setBalance(double value);
    void setID(unsigned int id);

    // getters
    std::string getFirstName() const;
    std::string getLastName() const;
    double getBalance() const;
    unsigned int getID() const;

private:
    unsigned int accountNumber;
    char firstName[15];
    char lastName[10];
    double balance;

};

#endif