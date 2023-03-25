#include <iostream>
#include <string>

using namespace std;

int main(){

    // declare the varaibles
    int sum{0};
    int gardeCounter{0};
    
    while (gardeCounter <= 10){
        // get the marks from the user
        cout << "Enter the Marks >>> ";
        int mark;
        cin >> mark;
        sum += mark;

        // incrase the grade Counter
        gardeCounter += 1;
    }

    // calculate the average
    int average = sum/gardeCounter;
    cout << "Average is the " << average << endl;

    return 0;

}