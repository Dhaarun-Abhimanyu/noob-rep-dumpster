#include <stdio.h>
int main(){
    int frequency[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char str[50];
    printf("\nEnter a string : ");
    scanf("%s",&str);
    int i=-1;
    while(str[++i] != '\0'){
        int c=(int)str[i];
        if(c >= 65 && c <= 90){
            frequency[c-65]++;
        }
        else if(c >= 97 && c <= 122){
            frequency[c-97]++;
        }
        else{}
    }
    printf("\nFrequency : ");
    for(int i=0;i<26;i++){
        if(frequency[i] == 0)
            continue;
        else
            printf("\n%c : %d",(char)(i + 97),frequency[i]);
    }
    return 0;
}