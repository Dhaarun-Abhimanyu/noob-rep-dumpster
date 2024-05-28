#include <stdio.h>
#include <string.h>
int alpha(char c){
    return strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",c) != NULL;
}
int digit(char c){
    return strchr("0123456789",c) != NULL;
}
int main(){
    int freq[3];
    char a[100];
    printf("\nEnter a String : ");
    scanf("%s",&a);
    printf("%d",strlen(a));
    for(int i=0;i<(int)strlen(a);i++){
        char temp = a[i];
        if(alpha(temp) != 0)
            freq[0]++;
        else if(digit(temp) != 0)
            freq[1]++;
        else
            freq[2]++;
    }
    printf("\nFrequency:\nAlphabets : %d\nDigits : %d\nSpecial Characters : %d",freq[0],freq[1],freq[2]);
    return 0;
}