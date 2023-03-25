#include<iostream>
#include<string>
#include"Person.h"
#include"Employee.h"

using namespace std;

Person globalPerson{"global", "person"};

int main() {

    Person person("reshani", "kavindya", 178.54, 17);
    Employee employee{person, 45000};

    cout << "First Name is " << person.getFirstName() << endl;
    string fName = person.getFirstName();

    person.setFirstName("RESHANI");
    // fName[0] = 'x';
    // cout << "First Name is " << person.getFirstName() << endl;

}