#include <stdio.h>
#include <string.h>

void main()
{
    int alpha=0,digit=0,splchr=0;
    char str[100];
    printf("Enter the string: ");
    scanf("%s",&str);
    for (int i=0;i<strlen(str);i++){
        if (97 <= (int)str[i] && (int)str[i] <= 122 || 65 <= (int)str[i]&& (int)str[i] <= 90){
            alpha += 1;
        }
        if (48 <= (int)str[i] <= 57){
            digit += 1;
        }
        else{
            splchr += 1;
        }
    }
    printf("Alphabets: %d",alpha);
    printf("\nDigits: %d",digit);
    printf("\nSpecial Characters: %d",splchr);
}
