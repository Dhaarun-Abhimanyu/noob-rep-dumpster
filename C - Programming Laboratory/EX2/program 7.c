#include <stdio.h>

void main() {
    char firstname[50],lastname[50];
    int year;
    printf("Enter your firstname: ");
    scanf("%s",&firstname);
    printf("Enter your lastname: ");
    scanf("%s",&lastname);
    printf("Enter your year: ");
    scanf("%d",&year);
    printf("%s %s %d\n", firstname, lastname, year);
}
