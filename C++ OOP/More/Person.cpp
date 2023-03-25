#include<iostream>
#include<string>
#include "Person.h"

using namespace std;

Person::Person(const string &fName, const string &lName, double height, unsigned int age) : firstName(fName), 
        lastName(lName), height{height}, age{age} {
            cout << "create a person name with " << firstName << " " << lastName << endl;
}

Person::Person(const string& fName, const string& lName) : Person{fName, lName, 100.00, 10} {
    // empty body
}

Person::~Person() {
    cout << "Person name with " << firstName << " " << lastName << " was destroyed" << endl;
}

Person::Person() : Person{"deafult", "person"} {
        cout << "default person created";    
}

string Person::getFirstName() const{
    return firstName;
}

string Person::getLastName() const{
    return lastName;
}

double Person::getHeight() const {
    return height;
}

unsigned int Person::getAge() const {
    return age;
}

// setters
void Person::setFirstName(string fName) {
    firstName = fName;
}

void Person::setLastName(string lName) {
    lastName = lName;
}