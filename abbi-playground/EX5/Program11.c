#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char str[100];
    printf("Enter the string: ");
    gets(str);
    for (int i=97;i<123;i++){
        int count = 0;
        for (int j=0;j<strlen(str);j++){
            if ((int)tolower(str[j]) == i)
                count += 1;
        }
        if (count != 0){
            printf("Number of %c: %d\n",(char)i,count);
        }
    }
}

// Enter a string: Hello World
// Number of d: 1
// Number of e: 1
// Number of h: 1
// Number of l: 3
// Number of o: 2
// Number of r: 1
// Number of w: 1
