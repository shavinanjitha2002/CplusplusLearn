#include <iostream>

using namespace std;

void tryModify(const int* poniter);

int main(){

    // dcelare the pintre and integer
    int y{4};
    int* yPtr{&y};

    tryModify(yPtr);

}

void tryModify(const int* pointer){
    *pointer = 78;
}