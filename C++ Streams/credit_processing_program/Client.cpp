#include <string>

#include "Client.h"

using namespace std;

Client::Client(unsigned int id , const string& fName , const string& lName , double value)
            : accountNumber(id), balance(value)
            {
                setFirstName(fName);
                setLastName(lName);
            }

string Client::getFirstName() const{
    return firstName;
}

string Client::getLastName() const{
    return lastName;
}

double Client::getBalance() const{
    return balance;
}

unsigned int Client::getID() const{
    return accountNumber;
}

// setter
void Client::setFirstName(const string& nameString){
    // get the lengtht of the namestring
    size_t size{nameString.size()};
    size_t length = (size < 15 ? size : 14);
    // copy string to firstName;
    nameString.copy(firstName , length);
    firstName[length] = '\0'; // enter the null pointer charcter for terminate the char arrayu
}

void Client::setLastName(const string& nameString){
    size_t size{nameString.size()};
    size_t length = (size < 15 ? size : 14);
    nameString.copy(lastName , length);
    lastName[length] = '\0';
}

void Client::setBalance(double value){
    if (value < 0){
        throw new invalid_argument("blalance must be a poitive value.");
    }
    balance = value;
}

void Client::setID(unsigned int id){
    accountNumber = id;
}




