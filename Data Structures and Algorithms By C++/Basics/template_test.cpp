#include<iostream>
#include<string>
#include "template_test.h"

using namespace std;

int main(){
    // create generic template class
    Printer<string> printer1("shavin anjitha");
    printer1.printObject();

}