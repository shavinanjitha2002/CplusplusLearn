#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

void inputElement(vector<int>& array);
void outputArray(const vector<int>& array);

int main(){
    // createing the two vvwctors
    vector<int> array1(5);
    vector<int> array2(10);
    // display the vectoro size 
    cout << "sixe of the array 1 : " << array1.size() << endl;
    cout << "elemnt of the array1 : " << endl;
    outputArray(array1);

    // insert the items from user
    inputElement(array1);
    cout << "elemnt of the array1 after insertions : " << endl;
    outputArray(array1);

    // display the vectoro size 
    cout << endl;
    cout << "sixe of the array 2 : " << array2.size() << endl;
    cout << "elemnt of the array2 : " << endl;
    outputArray(array2);

    // insert the items from user
    inputElement(array2);
    cout << "elemnt of the array2 after insertions : " << endl;
    outputArray(array2);

    // check if the array 1 and array 2 are equals
    cout << endl;
    cout << "array1 and array2 is equal : " << (array1 == array2) << endl;

    // create the new vector using the array1 
    vector<int> array3{array1};
    // display the size and elemnt of the array3
    cout << "size of the array3 : " << array3.size() << endl;
    cout << "elemnt of the array3 is : " << endl;
    outputArray(array3);

    // use the array indexing feature
    cout << "fifth elemnt of the array2 : " << array2[5] << endl;
    // set the values
    array2[5] = -3333;
    outputArray(array2);

    // exceptions for handling exceptions
    try{
        cout << "45 element of the array2 : " << endl;
        cout << array2.at(45) << endl;
    }
    catch (out_of_range& ex){
        // print the erroe
        cout << ex.what() << endl;
    }

    // /push the value sto vector object
    array1.push_back(-9999);
    outputArray(array1);



}

void inputElement(vector<int>& array){
    for (int& item : array){
        cin >> item; 
    }

}

void outputArray(const vector<int>& array){
     // display the item of array
    for (int item : array){
        cout << item  << ",";
    }
    cout << "\b" << endl;
    
}