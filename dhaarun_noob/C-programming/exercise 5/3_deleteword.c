#include <stdio.h>
#include <string.h>
int main(){
    char str[100], word[20];
    printf("Enter the word to be deleted :");
    scanf("%s",&word);
    printf("\nEnter a sentence terminated by # :");
    scanf("%[^#]s",&str);
    int index=0;
    int str_len = strlen(str), word_len = strlen(word);
    int i=1,space=1;
    while(str[i]!='\0'){
        if(str[i] == ' '){
            space = 1;
            index = 0;
        }
        else if(str[i] != word[index] && index < word_len){
            index = 0;
            space=0;
        }
        else{
            if(index == word_len-1 && (str[i+1] == ' ' || str[i+1] == '\0') && space == 1){
                for(int j=i-word_len;j<=str_len - word_len;j++){
                    char temp = str[j];
                    str[j] = str[j+word_len+1];
                    str[j+word_len+1] = temp;
                }
                index = 0;
                i = i - word_len;
                continue;
            }
            else
                index++;
        }
        i++;
    }
    printf("\nSentence after removing the word : %s\n%s",word,str);
    return 0;
}