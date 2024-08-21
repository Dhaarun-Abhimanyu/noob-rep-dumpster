#include <stdio.h>
#include <string.h>

struct Account{
    char name[50];
    int password;
    int acc_number;
    float balance;
};

// make transaction from 1 acc to another
// view bank balance

int main()
{
    FILE *fptr = fopen("database.txt","r");

    if (fptr == NULL){
        printf("No database");
        return 0;
    }
    // get user login data
    int acc, pass;
    printf("---------LOGIN---------\n");
    printf("ACC NUMBER: ");
    scanf("%d",&acc);
    printf("\nPASSWORD: ");
    scanf("%d",&pass);

    // check login info
    struct Account account[100];

    int i = 0;

    while (fscanf(fptr,"%s %d %d %f",&account[i].name,&account[i].password,&account[i].acc_number,&account[i].balance)!= EOF){
        if (acc == account[i].acc_number && account[i].password == pass){
            printf("NAME: %s",account[i].name);
            int z;
            printf("\nSelection n option: \n(1) Check bank balance \n(2) Make a Transaction\n");
            scanf("%d",&z);
            if (z==1){
                printf("BALANCE: %f",account[i].balance);
            }
            else{
                int sacc;
                float sammount;
                printf("\nEnter transaction amaount and account number: \n");
                printf("AMOUNT: ");
                scanf("%d",&sacc);
                printf("TO ACC NUMBER: ");
                scanf("%f",&sammount);

                //make the transaction
                account[i].balance -= sammount;
                int t;
                for (t=0;t<2;t++){
                    if (account[t].acc_number == sacc){
                        account[t].balance += sammount;
                    }
                }
            }
        }
        i++;
    }
    fclose(fptr);

    int j;
    FILE *nfptr = fopen("db.txt","w");
    for (j=0;j<i-1;j++){
        char text[] = account[i].name;
        strcat(text," ");
        strcat(text,account[i].password);
        strcat(text," ");
        strcat(text,account[i].acc_number);
        strcat(text," ");
        strcat(text,account[i].balance);
        fprintf(nfptr,"%s",text);
    }
    fclose(nfptr);

    return 0;
}
