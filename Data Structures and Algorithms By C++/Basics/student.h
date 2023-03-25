#include<iostream>
#include<string>
#include<stdexcept>

class Student{

public:
    // explicit constructor
    explicit Student(std::string stdName) : name{stdName} {
        // empty body
        std::cout << "Initialize the Student with name " << stdName << std::endl;
    }

    Student(std::string stdName, unsigned int age) : name{stdName}, age{age} {
        std::cout << "Initialize the Student with name " << name << " and age " << age << std::endl;
    }

    // getter and setters
    std::string getName() const{
        return name;
    }

    unsigned int getAge() const{
        return age;
    }

    float getMarks() const{
        return average_marks;
    }

    void setMarks(float marks){
        if (marks < 0){
            std::cout << "marks cannot be negative";
            throw std::invalid_argument("marks cannot be negative");
        }

        average_marks = marks;
    }


private:
    std::string name;
    float average_marks;
    unsigned int age;

};