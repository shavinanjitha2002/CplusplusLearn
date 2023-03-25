#include <stdio.h>

#define ZERO 1
#define CREDIT 2
#define DEBIT 3
#define EXIT 4

int main(){

    FILE *filePtr; // declare the file structure pointer

    if ((filePtr = fopen("accounts.txt", "r")) == NULL){
        puts("file cannot be read/ cannot opened");
    }
    else{

        int index;
        char name[30];
        double amount;

        unsigned int option;// integer for reading option code from the stdin

        puts("Credit Inqury Program");
        puts("\nEnter onr of the following options:\n"
                "1 - clients with zero balance\n"
                "2 - clients with credit balance\n"
                "3 - clients with debot balance\n"
                "4 - exit program");

        printf("%s ", "?");
        scanf("%d", &option);

        while (option != EXIT){

            printf("%-10%-20s%-10s\n", "Account", "Name", "Balance");

            switch (option){
                case ZERO:
                    puts("Accounts with zero balances:");

                    fscanf(filePtr, "%d %s %lf", &index, name, &amount);

                    while (!feof(filePtr)){
                        if (amount == 0){
                            printf("%-10d%-20s%10.2f\n", index, name, amount);
                        }
                        fscanf(filePtr, "%d %s %lf", &index, name, &amount);
                    }

                    break;
                case CREDIT:
                    puts("Accounts with zero balances:");

                    fscanf(filePtr, "%d %s %lf", &index, name, &amount);

                    while (!feof(filePtr)){
                        if (amount == 0){
                            printf("%-10d%-20s%10.2f\n", index, name, amount);
                        }
                        fscanf(filePtr, "%d %s %lf", &index, name, &amount);
                    }

                    break;
                
                case DEBIT:
                    puts("Accounts with zero balances:");

                    fscanf(filePtr, "%d %s %lf", &index, name, &amount);

                    while (!feof(filePtr)){
                        if (amount == 0){
                            printf("%-10d%-20s%10.2f\n", index, name, amount);
                        }
                        fscanf(filePtr, "%d %s %lf", &index, name, &amount);
                    }

                    break;

                default:
                    puts("option you entered is invalid! please enter valid option");
                    break;
            }

            // rewinf the file to byte zero position
            rewind(filePtr);

            printf("%s ", "?");
            scanf("%d", &option);
        }

        puts("End of program");
        fclose(filePtr);

    }

}