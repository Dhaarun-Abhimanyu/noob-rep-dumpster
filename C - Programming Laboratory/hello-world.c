#include <stdio.h>

/* This code gets the name from the user and print Hello <name> */
void main() {
    char name;
    printf("Enter your name:");
    scanf("%s",name);
    printf("[+] Hello %s",name);
}
