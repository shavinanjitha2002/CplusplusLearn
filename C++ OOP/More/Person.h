#include<iostream>
#include<string>

#ifndef PERSON_H
#define PERSON_H

class Person {

public:
    // constructors
    Person();
    Person(const std::string&, const std::string&, double, unsigned int);
    Person(const std::string&, const std::string&);
    ~Person();

    // getters
    std::string getFirstName() const;
    std::string getLastName() const;
    double getHeight() const;
    unsigned int getAge() const;

    // setters
    void setFirstName(std::string);
    void setLastName(std::string);

private:
    std::string firstName;
    std::string lastName;
    double height;
    unsigned int age;

};

#endif