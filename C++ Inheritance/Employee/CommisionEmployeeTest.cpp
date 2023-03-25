#include <iostream>
#include <string>
#include <iomanip>

#include "CommisionEmployee.h"

using namespace std;

int main(){
    // create the new employee object
    CommisionEmployee emp1("shavin", "anjitha", "125415684", 20000, 0.05);
    CommisionEmployee emp2("reshani", "kavindya", "457965412", 40000, 0.12);

    // display the employee
    cout << emp1.to_string() << endl;
    cout << emp2.to_string() << endl;

    // set the shavin salary
    emp1.set_salary(35000);

    // display thr employee
    cout << "new employees : \n" << endl;
    cout << emp1.to_string() << endl;
    cout << emp2.to_string() << endl;


    


}