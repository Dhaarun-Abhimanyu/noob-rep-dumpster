#include <stdio.h>
int main(){
    char input[50],output[50],i=0,j=0;
    printf("\nEnter a string : ");
    scanf("%s",&input);
    output[0] = '\0';
    while(input[i] != '\0'){
        char c = input[i];
        int flag = 1;
        while(output[j] != '\0'){
            if(c == output[j]){
                flag = 0;
                break;
            }
            j++;
        }
        if(flag == 1){
            output[j] = c;
            output[j+1] = '\0';
        }
        j=0;
        i++;
    }
    printf("\nOutput : %s",output);
    return 0;
}