#include <string>

#ifndef OBJECT_H
#define OBJECT_H

class Object{
public:
    Object(int , std::string);
    ~Object();
    int getID();

private:
    int id;
    std::string name;
};

 #endif