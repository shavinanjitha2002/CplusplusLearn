#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    // open the fiel channel
    ofstream writeFile{"file.txt", ios::out};
    // check if the file is ready to write the data
    if (!writeFile){
        cerr << "file open for writing is failire..."<< endl;
        exit(EXIT_FAILURE);
    }

    string name;
    int age;
    double payment;

    cout << "enter the name, age and payment of the employee in the showed order" << endl;

    while (cin >> name >> age >> payment){
        writeFile << name  << " " << age  << " " << payment << endl;
    }
    cout << "\nsuccesfull write tothe file.";

    writeFile.close();

}