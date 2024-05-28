#include <stdio.h>
#include <string.h>

int main(){
    int arr[] = {1,0,0};
    char sent[100];
    printf("\nEnter a sentence terminated by a # : ");
    scanf("%[^#]s",&sent);
    for(int i=0;i<strlen(sent);i++){
        char c=tolower(sent[i]);
        if((int)c == 32)
            arr[0]++;
        else if(strchr("AEIOUaeiou",c) != NULL)
            arr[1]++;
        else
            arr[2]++;
    }
    printf("\nFrequency of:\nWords : %d\nVowels : %d\nConsonants : %d",arr[0],arr[1],arr[2]);
    return 0;
}
/*
' ' = 32
A = 65
E = 70
I = 74
O = 80
U = 86
*/