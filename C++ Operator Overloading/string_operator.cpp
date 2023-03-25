#include <iostream>
#include <string>

using namespace std;

int main(){
    // creat the tree strings
    string s1{"shavin"};
    string s2{"reshani"};
    string s3; // emptty string

    cout << "s1 : " << s1 << "\ns2 : " << s2 << "\ns3 : " << s3 << endl;
    cout << endl;

    cout << boolalpha;
    cout << "s1 == s2 : " << (s1 == s2) << endl;
    cout << "s1 != s2 : " << (s1 != s2) << endl;
    cout << "s1 < s2 : " << (s1 < s2) << endl;
    cout << "s1 > s2 : " << (s1 > s2) << endl;
    cout << "s1 <= s2 : " << (s1 <= s2) << endl;

    if (s3.empty()){
        cout << "\ns3 is empty string..."<< endl;
        s3 = s2;
        cout << "new s3 is the " << s3 << endl;
    }

    // using the += operator for addig the strings
    cout << "s1 + s2 : " << (s1 + s2) << endl;
    s1 += s2;
    cout << "s1 after s1 += s2 : " << s1 << endl;

    // create sub string using substr member function
    s3 = s1.substr(1, 6);
    cout << "new s3 after s3.substr(1, 6) : " << s3 << endl;

    // create the other new string of s1.substring
    string s4 = s1.substr(5);
    cout << "s4 : " << s4 << endl;

    // create the new stringn using copy constructor
    string s5{s2};
    cout << "s5 : " << s5 << endl;

    // using subscript for change charctor
    s1[0] = 'K';
    s1[5] = 'q';

    cout << "new s1 : " << s1 << endl;

    char c = s1.at(4);
    cout << "s1[4] = " << c << endl;

    try{
        char k = s1.at(100);
    }
    catch (out_of_range& exception){
        cout << exception.what();
    }
  
}