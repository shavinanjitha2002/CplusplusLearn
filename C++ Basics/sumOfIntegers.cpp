#include <iostream>

int main(){

    // create theh two integers
    int integer1{0};
    int integer2{0};
    // create the integer for sum 
    int sum{0};

    // get the input from the user
    std::cout << "Enter the first Integer >>> ";
    // get the integr 1
    std::cin >> integer1;

    // get hthe second integr from the user
    std::cout << "Enter the second Integer >>> ";
    // get the second integer
    std::cin >> integer2;

    // calculate the sum of tintegr 1 and integr 2
    sum = integer1 + integer2;

    // display the sum of the inetegers
    std::cout << "Sum is " << sum << std::endl;

}