#include<stdio.h>
int main(){
    char name[20],surname[20];
    int date;
    printf("Firstname : ");
    scanf("%s",name);
    printf("Surname : ");
    scanf("%s",surname);
    printf("Year of birth : ");
    scanf("%d",&date);
    printf("%s %s %d",name,surname,date);
    return 0;
}