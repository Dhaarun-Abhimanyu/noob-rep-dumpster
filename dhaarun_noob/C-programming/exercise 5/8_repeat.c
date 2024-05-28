#include <stdio.h>
void cpy(char word[],char *ptr){
    int i=0;
    while(*ptr != '\0'){
        word[i++] = *ptr;
        ptr = ptr + 1;
    }
    word[i] = '\0';
}
int main(){
    char sent[100][100];
    int word_number = 0,index=0;
    printf("\nEnter a sentence terminated with a hash : ");
    scanf("%s",&sent[0]);
    while(sent[word_number][0] != '#'){
        scanf("%s",&sent[++word_number]);
    }
    char word[20];
    char *ptr = &sent[0][0];
    cpy(word,ptr);
    while(word[0] != '#'){
        for(int i=index+1;i<word_number;i++){
            int flag = 1,check=0;// sai saiii 
            for(int j=0;sent[i][j] != '\0';j++){
                check = j;
                if(word[j] != sent[i][j]){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1 && word[check+1] == '\0'){
                printf("\nDeleted");
                sent[i][0] = '\0';
            }
        }
        index++;
        ptr = &sent[index][0];
        cpy(word,ptr);
    }
    printf("\nSentence after deletion :");
    int temp=0;
    while(sent[temp][0] != '#'){
        printf("%s ",sent[temp++]);
    }
    return 0;
}