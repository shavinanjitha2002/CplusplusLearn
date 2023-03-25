#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

// create the enum class
enum class RequestType{
    ZERO = 1 , CREDIT_BALANCE , DEBIT_BALANCE , END};

// declare the function prototypes for program
bool shoudDisplay(const double&, RequestType&);
RequestType getRequestType();
void printLine(const unsigned int , const string&, const double);


int main(){
    // open thhe file channel
    ifstream readFile{"clients.txt", ios::in};

    // check of error occurs
    if (!readFile){
        cout << "error occurs while reading file.";
        exit(EXIT_FAILURE);
    }

    // choose the while loop
    RequestType request;
    do{
        request = getRequestType();

        switch (request){
            case (RequestType::ZERO) : {
                cout << "\nAccounts with zero balancces : \n";
                break;
            }
            case (RequestType::CREDIT_BALANCE) : {
                cout << "\nAccounts with credit balances  : \n";
                break;
            }
            case (RequestType::DEBIT_BALANCE) : {
                cout << "\nACcounts with debit balances : \n";
                break;
            }
            default:{
                break;
            }
        }

        string name;
        unsigned int ID;
        double value;

        cout << setw(5) << "ID" << setw(20) << "Name" << setw(15) << "Balance (Rs.)" << endl;
        // print the clients fron the file
        // set the fil eposition to begining byte
        while (readFile >> name >> ID >> value){
            // show the line
            if (shoudDisplay(value, request)){
                printLine(ID , name, value);
            }
        }
        // set the fil eposition
        readFile.clear();
        readFile.seekg(0);
        cout << endl;
    }while (request != RequestType::END);

    cout << "ending the program...";
    readFile.close();
    
}

RequestType getRequestType(){
    
    int choice{1};
    while (choice > 0 && choice < 4)
    {
            // print the choices
        cout << "enter the on of the choices." 
            << "\nZERO BALANCES  - 1" 
            << "\nCREDIT BALANCES - 2"
            << "\nDEBIT BALANCES - 3"
            << "\nEND - 4" << "\n>>> ";

        // get the request type
        cin >> choice;
        if (choice > 0 && choice  < 4){
            return static_cast<RequestType>(choice);       
        }
        cout << "\nenter the valid choice!\n";
    }
    
}

bool shoudDisplay(const double& value  , RequestType& request){
    if (request == RequestType::ZERO){
        return value == 0;
    }
    else if (request == RequestType::CREDIT_BALANCE){
        return value < 0;
    }
    else{
        return value > 0;
    }
}

void printLine(const unsigned int ID , const string& name , const double value){
    cout << setw(5) << ID << setw(20) << name << setw(10) << setprecision(2) << fixed << value << endl;
}
