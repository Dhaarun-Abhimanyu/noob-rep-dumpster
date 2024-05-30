#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char** a, char** b){
    char* temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n;
    printf("\nEnter number of words : ");
    scanf("%d",&n);
    char **words = (char**)malloc(n*sizeof(char*));
    printf("\nEnter %d words :\n",n);
    for(int i=0;i<n;i++){
        words[i] = (char*)malloc(20*sizeof(char));
        scanf("%s",words[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(words[j],words[j+1]) == 1)
               swap(words+j , words+j+1);
        }
    }
    for(int i=0;i<n;i++)
        printf("\n%s",words[i]);
    return 0;
}