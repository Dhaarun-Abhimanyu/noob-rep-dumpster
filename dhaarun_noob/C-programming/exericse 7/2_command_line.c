#include <stdio.h>
int main(){
    int argv = 5;
    char *argc[] = {"10","20","30","20","10"};
    int max = 0;
    for(int i=0;i<argv;i++){
        int j=0,temp=0;
        while(*(*(argc+i)+j) != '\0'){//**(arr+i) == *arr[i]
            temp = temp*10 + (int)*(*(argc+i)+j++) - 48;
        }
        if(temp > max)
            max = temp;
    }
    printf("\nGreatest Number : %d",max);
    return 0;
}