#include <stdio.h>
#include <math.h>
int main(){
    float avg=0.0,sd=0.0;
    int size;
    printf("\nEnter number of terms : ");
    scanf("%d",&size);
    float arr[size];
    printf("\nEnter %d terms :\n",size);
    for(int i=0;i<size;i++){//input and finding average
        scanf("%f",&arr[i]);
        avg += arr[i];
    }
    avg/=size;
    for(int i=0;i<size;i++)//finding standard deviation
        sd+=pow(arr[i]-avg,2);
    sd=sqrt(sd/size);
    printf("\nAverage : %.2f\nStandard deviation : %.2f",avg,sd);
    return 0;
}