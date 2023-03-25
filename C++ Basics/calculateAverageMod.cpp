#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // creat the main varaibles
    int sum{0};
    int grade{0};
    unsigned int gradeCounter{0};

    cout << "Enter the marks (-1 for exit) >>> ";
    cin >> grade;

    // create the whileloop
    while (grade != -1){
        // add to the total;
        sum += grade;
        // incease the gradeCOunter
        gradeCounter++;

        // enter the new marks from the user
        cout << "Enter the marks (-1 for exit) >>> ";
        cin >> grade;
        // end of the whileloop
    }

    // display the informations we calculated
    if (gradeCounter != 0){
        // display the number of grades and total and average
        cout << "Total Number of students : " << gradeCounter << endl;
        cout << "Total of the Marks : " << sum << endl;

        // create the new double value for store the average value
        double average{static_cast<double>(sum) / gradeCounter};
        // display the Average
        cout << setprecision(2) << fixed;
        cout << "Class Average is : " << average << endl;
    }
    else{
        cout << "No student have enterd.";

    }

}