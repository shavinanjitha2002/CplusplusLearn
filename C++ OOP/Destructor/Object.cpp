#include <string>
#include <iostream>

#include "Object.h"

using namespace std;

Object::Object(int ID , string text){
    id = ID;
    name = text;

    cout << "Object with ID " << id <<  " and name " << name << " is contruct..." << endl;
}

Object::~Object() {
    cout << "Object with ID " << id << " and name " << name << " is Destructed..." << endl;  
}

int Object::getID() {return id;}

