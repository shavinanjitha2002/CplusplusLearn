#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    // initiate a file object with new file 
    fstream file{"test_file.txt", ios::out};
    // file.open("test_file.txt", ios::in|ios::out);

    if (!file){
        cerr << "error occured during open file";
        exit(EXIT_FAILURE);
    }
    // get the user inputs to put data into a text base file
    string name;
    unsigned int score;

    cout << "INSERT DATA..." << endl;
    while (cin >> name >> score){
        file << name << ", " << score << endl;
    }
    
    cout << "[INFO] successfully insert data.";
    file.close();

    // now read the file
    fstream readFile{"test_file.txt", ios::in};
    if (!readFile){
        cerr << "error occured during open the file." << endl;
        exit(EXIT_FAILURE);
    }
    cout << "\nbegin reading the file..." << endl;
    while (readFile >> name >> score){
        cout << name << ", " << score << endl;
    }

    readFile.close();
    cout << "[INFO] successfully read file...";
}