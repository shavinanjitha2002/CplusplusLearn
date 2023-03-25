#include <iostream>

using namespace std;

int main(){
    // declare the character variabvle
    int character;
    // print the eof status of the cin
    cout << "EOF status of the istream : " << cin.eof() << endl;

    while ((character = cin.get()) != EOF){
        cout.put(character);
    }

    // print the EOF charcter of theh systen
    cout << "EOF charctre of the local system is the  : " << character <<
            " after the eof status of the cin is " << cin.eof() << endl;
}