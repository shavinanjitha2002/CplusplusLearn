#include <string>
#include "Client.h"
#include <fstream>

using namespace std;

int main(){
    ofstream writFile{"clients.dat", ios::out | ios::binary}; // open the file channel
    // check of error has occured
    if (!writFile){
        cerr << "error has occured in the file writing...";
        exit(EXIT_FAILURE);
    }

    Client client;
    // use the for loop for write the 100 accounts in to the file
    for (unsigned int i{0}; i < 100; i++){
        writFile.write(
            reinterpret_cast<const char*>(&client) , sizeof(Client) 
        );
    }
}