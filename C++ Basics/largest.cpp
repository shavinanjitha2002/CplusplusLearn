#include <iostream>

using namespace std;

int main(){

// declare the program variables
    int value{0};
    int largets{value};
    unsigned int counter{1};

    cout << "Enter No. of Values >>> ";
    unsigned int rounds{0};
    cin >> rounds;

    cout << "Enter Value " << counter << " : ";
    cin >> value;

    largets = value;
    // create the for loop for this
    while (counter < rounds){
        counter++;
        // get the another value from the user
        cout << "Enter Value " << counter << " : ";
        cin >> value;

        if (value >= largets){
            largets = value;
        }
        // wnd of the while loop
    }

    // diaplt the maximum number
    cout << "\nMaximum Value : " << largets << endl;


}