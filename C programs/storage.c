#include<stdio.h>

void useLocal(void);
void useGlobal(void);
void useStatic(void);

int x = 0;

int main(void){

    // local scope varaible
    int x = 1;
    printf("local x: %d\n", x);

    {
        int x = 99;
        printf("block x = %d\n", x);
    }

    useLocal();
    useLocal();
    useGlobal();
    useGlobal();
    useStatic();
    useStatic();

}

void useLocal(void){

    int x = 77;

    printf("useLocal x = %d\n", x);
    printf("useLocal x after increment = %d\n", ++x);

}

void useGlobal(void){

    printf("useGlobal x = %d\n", x--);
}

void useStatic(void){

    static int x = -55;

    printf("useStatic x = %d\n", x--);
}