#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char str1[200], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    for (int i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }
    str1[len1 + len2] = '\0'; 

    printf("%s", str1);
}

// Enter first string: Hello
// Enter second string: World
// HelloWorld
