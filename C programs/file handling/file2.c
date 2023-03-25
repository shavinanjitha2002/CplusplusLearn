#include <stdio.h>

int main(){

    FILE *filePtr;

    if ((filePtr = fopen("accounts.txt", "r")) == NULL){
        puts("file cannot be opend.");
    }
    else{

        // declare the field need to store file data records
        int index; // account number 
        char name[30]; // account holder name
        double amount; // account balance

        printf("%-15s%-20s%-10s\n", "Acc. Number", "Name", "Balance");
        fscanf(filePtr, "%d %s %lf", &index, name, &amount);

        while (!(feof(filePtr))){
            printf("%-15d%-30s%7.2f\n", index, name, amount);
            fscanf(filePtr, "%d %s %lf", &index, name, &amount);
        }

        // close the file
        fclose(filePtr);

    }

}