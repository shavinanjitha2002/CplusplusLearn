#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int main(){

    // create an array of integers for store the frequencies
    int arrayOfNumbers[SIZE] = {7, 15, 12, 3, 6};

    // making the histogram 
    // print the heeaders
    printf("%s%13s%17s\n", "Element", "Frequencies", "Histogram");
    for (int i = 0; i < SIZE; i++){
        printf("%7d%13d        ", i, arrayOfNumbers[i]);
        for (size_t j = 0; j < arrayOfNumbers[i]; j++){
            printf("*");
        }
        puts("");
    }

}