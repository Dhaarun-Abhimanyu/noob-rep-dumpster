#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    printf("Enter the string: ");
    gets(str);
    for (int i=0;i<strlen(str);i++){
        if ((int)str[i]>=65 && (int)str[i]<=90)
            str[i] = (char)(int)str[i]+32;
        else
           str[i] = (char)(int)str[i]-32;
    }
    printf("New string: %s",str);
}

// Enter the string: ABCabc
// New string: abcABC
