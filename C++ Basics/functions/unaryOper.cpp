#include <iostream>

using namespace std;
// declare the global varaible
double var{10.00};

int main(){

    // crate the localvarable
    unsigned int value{5};

    // prinr the local and global data members
    cout << "local variable value is " << value << endl;
    cout << "global variable value is " << ::var << endl;

}