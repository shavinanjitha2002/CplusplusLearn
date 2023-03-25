//
// Created by DELL on 10/24/2022.
//
#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<algorithm>
#include<list>

using namespace std;

int main(){

    list<unsigned int> list1;

    list1.push_front(45);
    list1.push_back(99);

    for (const unsigned* intPtr{crbegin(begin(list1)}; intPtr != cend(end(list1)); ++intPtr){
        cout << &intPtr << ", ";
    }

    return 0;
}

