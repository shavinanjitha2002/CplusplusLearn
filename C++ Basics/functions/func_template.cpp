#include <iostream>

using namespace std;

template<typename T>
T maximum(T a, T b, T c){
    T maximumValue{a};

    if (maximumValue < b){
        maximumValue = b;
    }

    if (maximumValue < c){
        maximumValue = c;
    }

    return maximumValue;
}

int main(){

// call to th function template with diffteent types
    cout << maximum(4, 5, 9) << endl;
    cout << maximum(1.12, 4.11, -4.12) << endl;
    cout << maximum('a', 'c', 'd') << endl;


}