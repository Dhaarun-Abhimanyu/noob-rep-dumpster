#include <stdio.h>
int main(){
    char concat[100];
    printf("\nEnter String 1 :");
    scanf("%s",&concat);
    printf("\nEnter String 2 :");
    int len1 = 0;
    while(concat[len1++] != '\0'){}
    len1--;
    char word2[50];
    scanf("%s",&word2);
    int temp=0;
    while(word2[temp] != '\0'){
        concat[len1++] = word2[temp++];
    }
    printf("\nAfter concatenation : %s",concat);
    return 0;
}