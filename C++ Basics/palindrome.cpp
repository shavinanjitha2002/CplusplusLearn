#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    // enter the number
    cout << "Enter the Number of 5 digits >>> ";
    int number{0};
    cin >> number;

    int round{1};
    int check{0};


    while (round <= 2){
        int leftValue = number / static_cast<int>(pow(10, 5 - round));
        int rightValue = number % static_cast<int>(pow(10, round));

        if (leftValue == rightValue){
            check++;
        }
        round
        ++;
    
    }

    if (check == 2){
        cout << "This is the palinfrome";
    }
    else{
        cout << "This is not palindrome";
    }


}