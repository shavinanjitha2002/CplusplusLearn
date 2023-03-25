#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

void displayEmployee(const string&, const int&, const double&);

int main(){
    // open thh file channel for reading data from the file
    ifstream readFile{"file.txt", ios::in};

    // check if file is ready for readaing data
    if (!readFile){
        cerr << "error has been got from readign file open."<< endl;
        exit(EXIT_FAILURE);
    }


    cout << setw(15) << left  << "Name" << left << setw(5) << "Age" <<  left 
                    << setw(15) << "Payment(Rs.)" << endl;
    string name;
    int age;
    double payment;

    while (readFile >> name >> age >> payment){
        displayEmployee(name , age , payment);
    }

    readFile.close();
}

void displayEmployee(const string& name , const int& age , const double& payment){
    // display the employee
    cout << setw(15) << left << name << setw(3) << age << setw(15) << setprecision(2) << fixed << payment
    << endl;
}