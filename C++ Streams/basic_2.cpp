#include <iostream>

using namespace std;

int main(){
    const unsigned int SIZE{80};
    char buffer_1[SIZE];
    char buffer_2[SIZE];

    cout << "enter the sentences for display in the terminal : " << endl;
    cin >> buffer_1;

    cout << "buffer 1 output is the : " << buffer_1 << endl;

    cin.get(buffer_2, SIZE);
    cout << "buffer 2 output is the : " << buffer_2 << endl;
}