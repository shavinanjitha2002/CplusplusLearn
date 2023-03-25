// 2023-02-28
// Shavin Anjitha // sqiential file writing
#include<stdio.h>

int main(){
    // create a FILE structure
    FILE *filePtr;

    if ((filePtr = fopen("accounts.txt", "w")) == NULL){
        puts("File cannot be opened or created.");
    }
    else{
        // declare the index name and account balanace 
        int index;
        char name[30];
        float balance;

        // read from the standrad input
        puts("Enter the Account index, name and balance respectively");
        puts("Enter EOF at end of the data");
        printf("? ");

        scanf("%d %s %lf", &index, name, &balance);

        // write account index, name and balance to the file
        while (!(feof(stdin))){
            fprintf(filePtr, "%d %s %.2f\n", index, name, balance);
            printf("? ");
            scanf("%d %s %lf", &index, name, &balance);
        }

        // clsoe the file
        fclose(filePtr);
    }
}