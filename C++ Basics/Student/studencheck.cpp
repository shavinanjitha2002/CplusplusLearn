#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main(){
    // create the new Student objevt
    Student myStudent("shavin anjitha", 99);

    cout << "Name of the Student is " << myStudent.getName() << endl;
    cout << "Marks of hte Student " << myStudent.getMarks() << endl;
    cout  << "Grade of the student is " << myStudent.getGrade() << endl;

    // create the new student object using the userinuts
    cout << "Enter the new Student Name >>> ";
    std::string name;
    getline(cin, name);

    // get the input marks ofthe student
    unsigned int marks{0};
    cout  << "Enter the Marks of the Student >>> ";
    cin >> marks;

    Student newStudent(name, marks);

    // print to out the grade of the student
    cout << "Grade of the " << newStudent.getName() << " is " << newStudent.getGrade() << endl;

}

