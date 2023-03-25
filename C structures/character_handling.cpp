#include<string>
#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstring>

using namespace std;

int main(){

    cout << (isdigit('8') ? "8 is a " : "8 is not a") << " a digit." << endl
        <<  (isdigit('#') ? "# is a " : "# is not a") << " a digit." << endl;

    cout << (isalpha('a') ? "a is a " : "a is not a") << " a letter." << endl
        << (isalpha('7') ? "7 is a " : "7 is not a") << " a letter." << endl;

    cout << (isalnum('8') ? "8 is a " : "8 is not a") << " a alnum." << endl
        << (isalnum('#') ? "# is a " : "# is not a") << " a alnum." << endl;

    // create string using charcater arrays
    char strX[]{"This is a String"};
    char strY[20];
    char strZ[12];

    strcpy(strY, strX);
    cout << "array of strX : " << strX << endl;
    cout << "array of strY : " << strY << endl;

    strncpy(strZ, strX, 11);
    strZ[11] = '\0';

    cout << "array of strX : " << strZ << endl;

    // string concatanating
    char s1[20]{"Happy "};
    char s2[] {"New Year "};
    char s3[40];

    cout << "s1 = " << s1 << "\ns2 = " << s2 << endl;
    // concat the s1 and s2 into s1
    strcat(s1, s2);
    cout << "\n\nafter concat the s1 into s2: s1 = " << s1 << " ,s2 = " << s2 << endl;

    strncat(s3, s1, 5); // concatatnating s1 into s3 with only 6 characters alogn with the null character

    cout << "\n\nafter concat s1 into s3 with 6 char: s3 = " << s3 << endl;

    // compareing the string
    cout << "compare string alpha and beta: " << strcmp("alpha", "beta") << endl;
    cout << "compare string with custom length(Happy and Happy New): " << strncmp("Happy", "Happy New", 5) << endl;

    // tokanizing the strings
    char sentence[]{"This is a sentence with 7 words."};

    cout << "\n\nThis is the sentence which we are tokanizing: " << sentence << endl << endl;

    char* strTok = strtok(sentence, " ");

    while (strTok != NULL){
        cout << strTok << endl;
        strTok = strtok(NULL, " ");
    }

    cout << "\nAfter tokanizing string: " << sentence << endl;

}