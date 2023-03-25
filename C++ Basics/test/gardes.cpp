#include <iostream>
#include <cmath>

using namespace std;

unsigned int qualityPoints(unsigned int marks){
    // marks through the if conditions
    unsigned int quality{0};
    if (marks >= 90){
        quality = 4;
    }
    else if (marks >= 80){
        quality = 3;
    }
    else if (marks > 70){
        quality = 2;
    }
    else if (marks >= 60){
        quality = 1;
    }

    return quality;
}


double hypotenuse(double side1 , double side2){
    return sqrt(pow(side1 , 2) + pow(side2 , 2));
}

// wirte the main function here
// and assert statements
int main(){
    // code is here
    // i dont no about the assert statmenets in the C
    
    return 0;
}

