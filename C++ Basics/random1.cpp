#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){

    // use the for loop for generating the integr random numbers
    int number;

    // seeding the random sequence
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < 20; i++){
        // print the random numbesr to the console
        cout << setw(10) << rand() % 6 + 1;

        if (i % 5 == 0){
            cout << endl;
        }
    }

}