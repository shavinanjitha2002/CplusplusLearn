#include <iostream>

using namespace std;

void modifyValue(int& value);

void doNotModifyValue(int value);

int globalValue{100};

int main(){

// create the local varaible
    int value{10};

    modifyValue(value);
    cout << "new modified value1 : " << value << endl;

    doNotModifyValue(value);
    cout << "new modified value2 : " <<  value << endl;


}

void modifyValue(int& value){
    value += 10;
    cout << "value after modofy in the function1 : " << value << endl;

}

void doNotModifyValue(int value){
    value += 10;
    cout << "value after the modify on the function 2 : " << value << endl;
}