#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // declare the variables
    // unsigned int scores{0};
    unsigned int rounds{3};
    char c = 'n';
    // double currentAverage{0.0};

    do{
        // diaply the messages
        unsigned int sum = 0;
        for (unsigned int i = 0; i < rounds; i++){
            
            unsigned mark;
            do{
                cout << "Round " << i << " : ";
                cin >> mark;
            }while (mark > 4);
            
            // add to the sum
            sum += mark; 
        }

        // display the Average
        cout << setprecision(2) << fixed;
        cout << "Average : " << static_cast<double>(sum) / rounds << endl;

        // display the loop count message
        cout << "Do you want to enter another Score (y/n) : ";
        cin >> c;
        cout << endl;
    }while (c == 'y' || c == 'Y');



}