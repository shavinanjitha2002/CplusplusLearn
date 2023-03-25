#include <iostream>

using namespace std;

// tenplatte for print some one
template <typename T>
void print(T param) {
    cout << param << " : ..." << endl;
}

template <typename T, typename U>
void print_two(T param1, U param2){
    cout << param1 << " : param 1" << endl 
         << param2 << " : param 2" << endl;
}

int main(){
    print(54);
    print("String");
    print('c');
    print(true);
    print(45.1254);
    // using type names
    print<int>(545);
    print<string>("reshani");


    print_two<string, int>("shavin", 20);
    print_two<double, bool>(54.121, false);

}