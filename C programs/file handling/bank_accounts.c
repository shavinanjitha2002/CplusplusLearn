#include<stdio.h>

struct account
{
    unsigned int index; // account number through 1 to 100
    char lastname[15];
    char firstname[10];
    double balance; // account balance
};
// end of structure data


int main(){

    FILE *filePtr;

    if ((filePtr = fopen("bank_accounts.dat", "rb+")) == NULL){
        puts("Cannot open the data file.");
    }
    else{

        struct account client_account = {0, "", "", 0.0};

        puts("Enetr the account number through 1 to 100(0 for exit): ");
        
        scanf("%d", &client_account.index);

        while (client_account.index != 0){
            
            printf("\nEnter last name, first name, balance: ");
            scanf("%14s%9s%lf", client_account.lastname, client_account.firstname, &client_account.balance);

            // seek position in the file by user specified record number
            fseek(filePtr, (client_account.index - 1) * sizeof(struct bank_account), SEEK_SET);

            // write the content of structure to the random access file
            fwrite(&client_account, sizeof(struct bank_account), 1, filePtr);

            printf("\nEnter the account number: ");
            scanf("%d", &client_account.index);


        }

        fclose(filePtr);


    }

}