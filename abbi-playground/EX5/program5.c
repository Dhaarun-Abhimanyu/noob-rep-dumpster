#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",&str);
    for (int i=0;i<strlen(str);i++){
        int n = (int)str[i];
        if (n<=65 && n<=89 || n>=97 && n<=121){
            str[i] = (char)n+1;
        }
        else if (n==90 || n==122){
            n -= 25;
            str[i] = (char)n;
        }
    }
    printf("%s",str);
}

// Enter the string: AbZz
// BcAa
