#include <iostream>
#include <cmath>

using namespace std;

// declaet the functions prototypes
int maximum(int a, int b, int c);

int main(){

    // declaer the varables
    int a, b, c;
    cout << "Enter the Value 1 : ";
    cin >> a;

    cout << "Enter the Value 2 : ";
    cin >> b;

    cout << "Enter the Value 3 : ";
    cin >> c;

    int max = maximum(a, b, c);

    cout << "Maximum value is " << max << endl;
    cout << "Sqrare o fthe Max is the " << pow(max, 2) << endl;

    // call to the maximum function woth the double values
    double max2 = maximum(45.4, 2.22, 45.11);
    cout << max2 << endl;
    

}

int maximum(int a, int b, int c){
    int max = a;

    if (max < b){
        max = b;
    }

    if (max < c){
        max = c;
    }

    return max;
}