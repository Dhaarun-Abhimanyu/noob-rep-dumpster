#include <stdio.h>
#include <string.h>

void main()
{
    int low=0,flag = 1;
    char str[100];
    printf("Enter the string: ");
    scanf("%s",&str);
    int high = strlen(str)-1;
    while (low < high){
        if (str[low] != str[high]){
            flag = 0;
            break;
        }
        low++;
        high--;
    }
    if (flag == 1)
        printf("The string is a palindrome");
    else
        printf("The string is not a palindrome");
}


// Enter the string: ababa
// The string is a palindrome
