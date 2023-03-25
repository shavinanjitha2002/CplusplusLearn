#include<string>
#include<iostream>

template<class genType>
class Printer{

public:
    Printer(genType& object) {
        this->object = object;
    }

    void printObject() const{
        std::cout << "object is " << object << std::endl;
    }

private:
    genType object;

};