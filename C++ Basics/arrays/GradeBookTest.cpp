#include <array>
#include "GradeBook.h"
#include <string>

using namespace std;

int main(){
    // declkare the marks array
    array<int, 10> marks{45, 77, 87, 88, 99, 100, 14, 25, 55, 71};
    // create the object of GradeBook
    string name = "Introdunction to C++";
    GradeBook gradeBook(name , marks);
    // call to the display message
    gradeBook.displayMessage();

}


