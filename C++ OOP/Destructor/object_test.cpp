#include <iostream>
#include "Object.h"

using namespace std;

void createLocalObject(int* id){
    // create the local object with objetct class
    Object obj(*id , "local one");
    *id += 1;
    Object obj2(*id , "local one");
    *id += 1;

}

void createStaticObject(int* id){
    static Object object(*id, "static object");
    *id += 1;
}

// create the global namespace object
Object globalObject(0, "gloobal Object");

int main(){
    int id{1};
    int* idPtr{&id};

    // creat the local object
    Object o1(*idPtr, "local 1");
     // call to the local function
    createLocalObject(idPtr);
    // create the static object
    createStaticObject(idPtr);

    createStaticObject(idPtr);


}