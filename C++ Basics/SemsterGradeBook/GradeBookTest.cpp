#include <array>
#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

const int column{3};
const int row{10};

int main(){
    // declare the course name
    string name = "Introduction to C++ Arrays Semester 01";
    // declare the array
    array<array<int, column> , row> marks{45, 46, 77, 
                                        78, 79, 74, 
                                        41, 12, 52,
                                        89, 84, 85, 
                                        14, 15, 13, 
                                        99, 97, 100,
                                        65, 68, 67,
                                        34, 37, 44,
                                        55, 52, 49,
                                        24, 26, 28};

    // create the grade book object
    GradeBook gradeBook{marks, name};
    gradeBook.displayReport();
}