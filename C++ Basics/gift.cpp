#include <iostream>


int main(){

    // decalre the main variables
    unsigned int age;
    double balance;

    double limit = 100000.00;

    // get thhe vakue for theese from user
    printf("Age : ");
    scanf("%d", &age);

    printf("balance : ");
    std::cin >> balance;

    if (age <= 18){
        
        if (balance <= limit)
            printf("Gift : school Bag");
        else
            printf("Gift : Tablet");
       
        
    }
    
    else{
        if (balance <= limit){
            printf("Gift : Traveing bag");
        }
        if(balance > limit){
            printf("Gift : Rice cokker");
        }
    }

    

    return 0;

}