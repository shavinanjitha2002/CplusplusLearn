#include<stdio.h>

int main(void){

    // initialize a string as character array
    char name[10] = "Shavin";
    printf("%s\n", name);

    char input[10];
    scanf("%9s", input);

    printf("scanned string: %s", input);

}