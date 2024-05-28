#include <stdio.h>
#include <string.h>

int main(){
    char sent[100][100];
    int word_number = 0;
    printf("\nEnter a sentence terminated with a hash : ");
    scanf("%s",&sent[0]);
    while(sent[word_number][0] != '#'){
        if(sent[word_number][strlen(sent[word_number]) - 1] != 'n'){
            sent[word_number][0] = '\0';
        }
        scanf("%s",&sent[++word_number]);
    }
    
    printf("\nThe n words : ");
    for(int i=0;i<word_number;i++){
        if(sent[i][0] == '\0')
            continue;
        printf("%s ",sent[i]);
    }
    return 0;
}