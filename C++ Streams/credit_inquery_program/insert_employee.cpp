#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    // open the file for writing
    ofstream writeFile{"clients.txt", ios::app};

    if (!writeFile){
        cout << "error occured in the credit inquery writing file...";
        exit(EXIT_FAILURE);
    }

    // write the employees
    string name;
    unsigned int ID;
    double value;

    while (cin >> name >> ID >> value){
        // write tothe file
        writeFile << name  << " "  << ID  << " " << value << endl;
    }
    // close the file
    writeFile.close();
}