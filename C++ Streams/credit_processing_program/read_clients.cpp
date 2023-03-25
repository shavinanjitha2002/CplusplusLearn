#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

#include "Client.h"

using namespace std;

int main(){
    ifstream clientFile{"clients.dat", ios::in | ios::binary};

    if(!clientFile){
        cerr << "some erroe has occured while redaing the records.";
        exit(EXIT_FAILURE);
    }

    Client client;

    cout << setw(15) << left << "Acc. Number" << setw(20) << "First Name" << setw(20) << "Last Name"
        << setw(10) <<  right << "Balance" << endl;
    while (clientFile){
        clientFile.read(
            reinterpret_cast<char*>(&client) , sizeof(Client)
        );

        if (client.getID() != 0){
             // display the records
            cout << left << setw(15) << client.getID()
                << setw(20) << client.getFirstName()
                << setw(20) << client.getLastName()
                << setw(10) << right << showpoint << setprecision(2) << fixed << client.getBalance() << endl;
        }
    }
}

