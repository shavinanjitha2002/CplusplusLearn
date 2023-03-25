#include <iostream>

using namespace std;

// create the function prototype
void cudeByPointers(int*);
// create the global number
int number{5};

 int main(){

     cout << "value of the number : " << number << endl;
     cudeByPointers(&number);
     cout << "value of the number after modify : " << number << endl;
 }

 void cudeByPointers(int* number){
     *number = *number * *number * *number;
 }