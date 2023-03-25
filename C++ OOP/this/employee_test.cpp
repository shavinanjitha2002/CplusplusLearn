#include <iostream>
#include <string>
#include <iomanip>
#include "Employee.h"

using namespace std;

void create_static_employee(){
     static Employee emp_static("reshani", 16, 15.54);

}

void create_local_employee(){
    Employee emp_local("randika", 19, 788.54);
}

int main(){

    cout << "number of employee count : " << Employee::getCurrentCount() << endl;
    // create the employee object
    Employee emp1("shavin", 19, 45.12);
    // create the another employee
    Employee emp2("kasun", 20, 77.85);
    Employee emp3("pytha", 20, 45.77);


    cout << "number of employee count : " << Employee::getCurrentCount() << endl;
    
    // call to the this methods
    cout << "height of the " << emp1.get_name() << " is " << setprecision(2) << emp1.get_height() << endl;
    cout << "age of the " << emp2.get_name() << " is " << emp2.get_age() << endl;
    
    cout << endl;
    // call to the to_string method of the both of this
    cout << emp1.to_string() << endl << endl;
    cout << emp2.to_string() <<endl;

    // assing the emp2 to emp1
    emp2 = emp1;
    cout << endl <<  "new emp2 is : " << endl << emp2.to_string() << endl;

    // call to methods
    create_static_employee();
    create_local_employee();

    // use the poniter
    Employee* emp_new = &emp1;
    cout << emp_new->to_string() << endl;

    //use the chain methods
    emp3.set_name("pasindu").set_age(19).set_height(78.444);
    cout << endl << emp3.to_string() << endl;

    // change the employee name through the firned function
    change_name(emp1, "shavin_anjitha");
    cout << endl << emp1.to_string() << endl;

    cout << "\nnumber of current employee : " << Employee::getCurrentCount() << endl;
    cout << "number of employee : " << Employee::getCount() << endl;



}