#include <stdio.h>
int main(){
    char first_name[50],middle_name[50],last_name[50];
    printf("\nEnter ur name : ");
    scanf("%s",&first_name);
    scanf("%s",&middle_name);
    scanf("%[^\n]s",&last_name);
    first_name[1] = '\0';
    if(last_name[0] != '\0')
        middle_name[1] = '\0';
    printf("\nName : %s.%s.%s",first_name,middle_name,last_name);
    return 0;
}