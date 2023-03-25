#include <iostream>
#include <iomanip>

using namespace std;

// create the function prpto type
int volume(unsigned int width = 1, unsigned int height = 1, unsigned int depth = 1);

int main(){

    // call to the different parameters  for volumne functiob
    cout << "the difault box volume " << volume();

    cout << "\nbox volume with the width 10 : " << volume(10);

    cout << "\nbox volume with width 10 and height 10 : " << volume(10, 10);

    cout << "\nbox volume with width 10 heifgr 10 and depth 10 : " << volume(10, 10, 10);


}

int volume(unsigned int width , unsigned int height , unsigned int depth){
    return width * height * depth;
}