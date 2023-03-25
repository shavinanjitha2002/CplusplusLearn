#include <iostream>
#include <string>

#include "BasePlusCommisionEmployee.h"
#include "CommisionEmployee.h"

using namespace std;

int main(){
    // declare the base plus object
    BasePlusCommisionEmployee baseEmp("shavin", "anjitha", "124-45214", 40000, 0.05, 20000);
    cout << baseEmp.to_string() << endl;

    // create the commsisonemployee object
    CommisionEmployee comEmp("reshani", "kavindya", "452124587" ,90000, 0.09);
    cout << comEmp.to_string() << endl;

    // declare the rponiter to the employee oobject
    BasePlusCommisionEmployee* basePointer{&baseEmp};
    // declare the commsison employee poniter
    CommisionEmployee* comEmpPointer{&comEmp};

    // diaply the employee object string presemtation
    cout << "\nBase Employee Pointer : " << endl;
    cout << basePointer->to_string() << endl;

    // display the commision employee poniter string
    cout << "\nCommsisoon Employee Poniter : " << endl;
    cout << comEmpPointer->to_string() << endl;

    // declare the com employee poniter to base employee object
    CommisionEmployee* comPtrToBase{&baseEmp};
    // call  to the poniter string method
    cout << "\nCom. Employee Pointer to Base Employee : " << endl;
    cout << comPtrToBase->to_string() << endl;





}

