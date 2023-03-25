#include<iostream>
#include<string>
#include<stdexcept>
#include "student.h"

using namespace std;

int main(){

    // create a student object using explicit constructor
    Student student1("shavin");
    // create another object using two parameters constructor
    Student student2("reshani", 99.99);

    // set student 1 marks
    student1.setMarks(92.45);
    cout << student1.getName() << "and " << student1.getMarks() << endl;

}