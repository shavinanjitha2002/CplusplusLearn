#include <iostream>
#include <vector>

using namespace std;

template <typename T> void printVector(const vector<int>& integerVector);

int main() {
    // create the vector array
    vector<int> integerVector;

    cout << "Initial capacity of the vector : " <<
            integerVector.capacity() << "\nInitial Size of the vector : "
            << integerVector.size() << endl;
    // display the size and capacity of the vector

    integerVector.push_back(5); // append the value tothe vector
    integerVector.push_back(7);
    integerVector.push_back(77);

    // show hte new capacity and size of the vector
    cout << "New capacity of the vector : " <<
         integerVector.capacity() << "\nNew Size of the vector : "
         << integerVector.size() << endl;

    // create built in array using pointers
    const size_t SIZE{5};
    int values[SIZE] {1, 2, 3 ,4, 5};

    // use iterator for display thr array
    for (const int* ptr = cbegin(values); ptr != cend(values); ++ptr){
        cout << *ptr << ", ";
    }
    cout << endl;

    // print the vector integers using iterators
    cout << "vector iterator use for display values : ";
//    printVector(integerVector);
    cout << endl;

    // use the reverse iterator
    cout << "display values using reverse iterator : ";
    for (auto iter = integerVector.crbegin();
    iter != integerVector.crend(); iter++){
        cout << *iter << ", ";
    }
    cout << endl;

    return 0;

}

template <typename T> void printVector(const vector<T>& integerVector){
    for (auto constIter = integerVector.cbegin(); constIter != integerVector.cend();
    ++constIter){
        cout << *constIter << ", ";
    }
}
