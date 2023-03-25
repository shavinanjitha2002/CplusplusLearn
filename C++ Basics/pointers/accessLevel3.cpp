#include <iostream>

using namespace std;

int main(){
    // declasre the constant pointer to contant data
    int x{54};
    const int* const xPtr{&x};

    // try to modify the values and pointer
    *xPtr = 54;

    int y{78};
    xPtr  = &y;
}