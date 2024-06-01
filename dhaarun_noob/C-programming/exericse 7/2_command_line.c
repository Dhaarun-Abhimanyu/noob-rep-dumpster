#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int argv = 5;
    char **argc = (char**)calloc(argv+1,sizeof(char*));
    for(int i=0;i<5;i++){
        argc[i] = (char*)calloc(100,sizeof(char));
        scanf("%s",*(argc+i));
    }
    printf("\ntemp = %c",*(argc+1)+0);
    int max = 0;
    for(int i=0;i<argv;i++){
        int j=0,temp=0;
        while(*(*(argc+i)+j) != '\0'){//**(arr+i) == *arr[i]
            temp = temp*10 + (int)*(*(argc+i)+j++) - 48;
        }
        printf("\ntemp = %d",temp);
        if(temp > max)
            max = temp;
    }
    printf("\nGreatest Number : %d",max);
    return 0;
}