#include <iostream>

using namespace std;

int main(){
    // create the char pointer
    const char* const word{"display"};
    // display the memeory address of the pointer
    cout << "memory address of the char* : " << word << endl;
    cout << "memory address of the char* pointer : " << static_cast<const void*>(word) << endl;
}