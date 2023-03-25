#include <stdio.h>

#define SIZE 10

// function prototype to bubble sort
void bubble_sort(int *const array, const size_t length);
// function prototype for swaping
void swap(int *item1, int *item2);

int main(){

    // create an array of size 10
    int array[SIZE] = { 4, 2, 6, 8, -1, 4, 0, 7, 23, 14 };

    puts("Original array: ");
    for (size_t i = 0; i < SIZE; i++){
        printf("%4d", array[i]);
    }

    // sort the array using bubble sort
    bubble_sort(array, SIZE);

    puts("\nafter sorting: ");
    for (size_t i = 0; i < SIZE; i++){
        printf("%4d", array[i]);
    }
}

void bubble_sort(int * const array, const size_t length){

    for (int i = length - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            // swap the element of order is wrong
            if (array[j] > array[j + 1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }

}

//swap
void swap(int *item1, int *item2){
    int hold = *item2;
    *item2 = *item1;
    *item1 = hold;
}