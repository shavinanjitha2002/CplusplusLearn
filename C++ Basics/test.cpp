#include  <iostream>

int main(){
    int value = 0;
    // create the do while loop
    do {
        // prompt the enter message
        printf("enter the integer >>> ");
        // scan the integer
        scanf("%d", &value);

        if (value >= 0){
            printf("integer is the %d\n", value);
        }
        else{
            break;
        }
    }while (value >= 0);
}