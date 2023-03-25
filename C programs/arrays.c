#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void changeArrayElement(int array[], size_t position){

    printf("Array %d element: %d\n", position, array[position]);
    int e = array[position];
    e *= 5;
    printf("Array %d element after changeing: %d\n", array[position]);
}

void changeArray(int array[], size_t size){

    for (size_t i = 0; i < size; i++){
        array[i] += 999;
    }

}

void printArray(int array[], size_t size){

    for (size_t i = 0; i < size; i++){
        printf("%d, ", array[i]);
    }
    puts("");

}

int main(void){

    // initialize the integer array
    int array[SIZE];
    // append valued for the array
    for (size_t i = 0; i < SIZE; i++){
        array[i] = i * i;
    }

    // print the array with indices
    printf("%s%13s%15s\n", "Indices", "Elements", "Address");
    for (size_t i = 0; i < SIZE; i++){
        printf("%7u%13d%15p\n", i, array[i], array[i]);
    }

    // initialize a array with array initializer
    int arr2[10] = {0, 1 ,2};

    puts("new array:");
    for (size_t i = 0; i < 10; i++){
        printf("%d, ", arr2[i]);
    }
    
    // create 2D array with integers
    int array2[3][2] = {{1,2}, {3, 4}, {5, 6}};
    // print the array
    puts("\n\n2D Array:");
    for (size_t i = 0; i < 3; i++){
        for (size_t j = 0; j < 2; j++){
            printf("%d, ", array2[i][j]);
        }
        puts("");
    }

    puts("Before change:");
    printArray(array, SIZE);
    changeArrayElement(array, 5);
    puts("After change array:");
    printArray(array, SIZE);

    puts("Before change:");
    printArray(array, SIZE);
    changeArray(array, SIZE);
    puts("After change array:");
    printArray(array, SIZE);

}