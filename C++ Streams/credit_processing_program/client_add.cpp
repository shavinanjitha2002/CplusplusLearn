#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

#include "Client.h"

using namespace std;

int main(){
    // open the file channel
    fstream clientFile{"clients.dat", ios::out | ios::in | ios::binary};

    // check of error has occur
    if (!clientFile){
        cerr << "some error has occur when open th efile.";
        exit(EXIT_FAILURE);
    }

    cout << "enter the Account Number : ";

    // use the while loop
    string firstName;
    string lastName;
    unsigned int accNumber;
    double balance;

    cin >> accNumber;

    while (accNumber > 0 && accNumber <= 100){
        cout << "enter first name last name and account balance : " << endl;
        cin >> firstName >> lastName >> balance;
        // create the new client object
        Client newClient{accNumber, firstName, lastName, balance};
        // seel to the file position
        clientFile.seekp((accNumber - 1) * sizeof(Client));
        clientFile.write(
            reinterpret_cast<const char*>(&newClient) , sizeof(Client)
        );

        // enter the the account id
        cout << "enter the Account Number : ";
        cin >> accNumber;
    }

    clientFile.close();
    cout << "Account has been updated successfully...";
}