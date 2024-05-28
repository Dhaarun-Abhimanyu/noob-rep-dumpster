#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("\nEnter a sentence terminated with a # :");
    scanf("%[^#]s",&str);
    for(int i=0;i<strlen(str);i++){
        int temp = (int)str[i];
        if(temp == 90){
            temp = 65;
        }
        else if(temp == 122){
            temp = 97;
        }
        else if( (temp >= 65 && temp <= 90) || (temp >= 97 && temp <= 122)){
            temp++;
        }
        else
            continue;
        str[i] = (char)temp;
    }
    printf("\nChanged string : %s",str);
    return 0;
}