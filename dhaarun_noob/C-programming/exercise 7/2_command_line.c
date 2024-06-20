#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argv, char **argc){
    int max = 0;
    for(int i=1;i<argv;i++){
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