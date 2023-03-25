#include <iostream>
# include <string>
#include "Account.h"

using namespace std;

int main(){
    // create the account object
    Account account("Reshani Kavindya", 100000);

    cout << "Account Name is the " << account.getName() << endl;
    cout << "Account Balance is the " << account.getBalance() << endl;

    // get the namem for account
    cout << "Please enter the account name >>> ";
    string name;
    getline(cin, name);

    account.setName(name);

    cout << "New Account Name is the " << account.getName() << endl;


}