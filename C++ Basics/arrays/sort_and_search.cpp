#include <iostream>
#include <array>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    // create the array of colors
    const size_t arraySize{7};
    array<string , arraySize> colors{"red", "blue", "orange", "black", "white", "cyan", "yellow"};

    // print the array of colors
    cout << "Colors before sorting : " << endl;
    for (string& color  :colors){
        cout << color << ", ";
    }
    cout << endl;

    // sort the array
    sort(colors.begin(), colors.end());

    // print the sorted array
    cout << "\nsorted colors : " << endl;
    for (string& color : colors){
        cout << color  << ", ";
    }
    cout << endl;

    // use the binary Seach for find the element
    bool search1{binary_search(colors.begin(), colors.end(), "green")};
    cout << "\ngreen " << (search1 ? "was" : "was not") << "found in the colors.\n";

    bool search2{binary_search(colors.begin(), colors.end(), "yellow")};
    cout << "\nyellow " << (search2 ? "was" : "was not") << "found in the colors.";
}