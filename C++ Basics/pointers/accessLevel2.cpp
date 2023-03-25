#include <iostream>

using namespace std;

int main(){
    
    int y{4};
    // create the constant pointer
    int* const prt{&y};
    // try to modify the pointer value
    *prt = 45;
    // try to modify the pointer
    int x{54};

    prt = &x;
}