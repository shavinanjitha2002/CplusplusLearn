#include <iostream>

using namespace std;

// declare the cass Count
class Count{
    // declare the friend function to the Count class
    friend void setX(Count& , int);
public:
    int getX() {return x;}
private:
    int x{0};
};

void setX(Count& count , int value){
    count.x = value;
}

int mian(){
    // initialize Count object
    Count count;
    // change the value of the count obejct via hte firiend function of the count object
    setX(count, 455);
    cout << "value x after the change : " << count.getX() << endl;
} 