#include <stdio.h>
#include <stdlib.h>
typedef struct bill{
    char name[50];
    char date[15];
    int item_no;
    char **items;
    float *cost;
    int *number;
    float amount;
} bill;
void calculate(bill *b){
    if(b->amount > 2000)
        b->amount = 0.8 * b->amount;
    else if(b->amount > 1000)
        b->amount = 0.9 * b->amount;
    else if(b->amount > 500)
        b->amount = 0.95 * b->amount;
    else{}
}
void input(bill *b){
    printf("\nEnter name : ");
    scanf("\n");
    scanf("%[^\n]s",b->name);
    printf("Enter date : ");
    scanf("%s",b->date);
    printf("Enter number of items : ");
    scanf("%d",&b->item_no);
    b->items = (char**)malloc(b->item_no*sizeof(char*));
    b->cost = (float*)malloc(b->item_no*sizeof(float));
    b->number = (int*)malloc(b->item_no*sizeof(int));
    b->amount = 0.0;
    printf("Enter %d items:\n",b->item_no);
    for(int i=0;i<b->item_no;i++){
        b->items[i] = (char*)malloc(50*sizeof(char));
        printf("Item %d : ",i+1);
        scanf("%s %f %d",b->items[i],&b->cost[i],&b->number[i]);
        b->amount+=(b->cost[i]*b->number[i]);
    }
}
void display(bill *b){
    printf("\nCustomer Name : %s\nDate : %s\nItems:\nItem no.\tName\tCost\tNumber\tTotal",b->name,b->date);
    for(int i=0;i<b->item_no;i++){
        printf("\nItem %d\t%s\t%.2f\t%d\t%.2f",i+1,b->items[i],b->cost[i],b->number[i],b->cost[i] * (float)(b->number[i]));
    }
    printf("\nBill Amount : %.2f",b->amount);
    calculate(b);
    printf("\nAfter discount : %.2f",b->amount);
}
int main(){
    int n;
    printf("\nEnter number of bills : ");
    scanf("%d",&n);
    bill *b = (bill*)malloc(n*sizeof(bill));
    printf("\nEnter %d bill inputs",n);
    for(int i=0;i<n;i++){
        input(b+i);
    }
    printf("\nOutput:\n");
    for(int i=0;i<n;i++)
        display(b+i);
    return 0;
}