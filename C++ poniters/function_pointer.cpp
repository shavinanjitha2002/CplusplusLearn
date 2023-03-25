#include <iostream>

using namespace std;

void printSum(string msg , int (*func)(int, int)){
    cout << msg << " : " << endl;
    cout << func(1, 10) << endl;
}

int addAndPrint(int a, int b){
    int i{0};
    for (int k{a}; k <= b; k++){
        i += k;
    }
    cout << "sum is the " << i << endl;
    return i;
}

int main(){
    // declare the function pointer
    int (*func)(int, int);
    func = addAndPrint;

    // call to the function
    int c = func(4, 8);
    printSum("function callback" , addAndPrint);
}