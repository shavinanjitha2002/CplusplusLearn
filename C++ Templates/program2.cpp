#include <iostream>
#include <string>

using namespace std;

// create the class using templates
template <typename T>
class Device{
private:
    T element;
public:
    Device(T param) : 
        element{param} {
            // empty body
        }

    T get_element() const{
        return element;
    }
};

int main(){
    // create the Device Object
    Device<int> device1(45);
    Device<string> device2("Shavin");

    cout << "device 1 element : " << device1.get_element() << endl;
    cout << "device 2 element : " << device2.get_element() << endl;
}