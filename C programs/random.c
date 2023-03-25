#include<stdio.h>
#include<time.h>
#include<stdlib.h>

enum STATUS {WIN, LOSE, TIE};

unsigned int get_total(void);

int main(void){

    srand(time(NULL)); // seed the random generator

    unsigned points;
    for (int i = 0; i <= 5; i++){
        points += get_total();
    }

    if (points > 30){
        printf("WIN");
    }
    else if (points == 30){
        printf("TIE");
    }
    else{
        printf("LOSE");
    }

}

unsigned int get_total(void){

    unsigned int value_1 = rand() % 6 + 1;
    unsigned int value_2 = rand() % 6 + 1;

    printf("value 1: %d, value 2: %d\n", value_1, value_2);
    return value_1 + value_2;


}