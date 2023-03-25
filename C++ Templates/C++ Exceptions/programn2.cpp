#include <iostream>
#include <stdexcept>

using namespace std;

// declare the function for rethrowing the exception
void throw_function(){
    try{
        cout << "execute try block in function" << endl;
        throw exception{};
    }
    catch (exception& exception){
        cout << "execuet catch block in function" << endl;
        throw;
    }
}


int main(){
    try{
        throw_function();
    }
    catch (exception& exception){
        cout << "exception handled in main program" << endl;
    }
}