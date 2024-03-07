#include<stdio.h>
int main(){
    float rich;
    printf("Enter richer number : ");
    scanf("%f",&rich);
    printf("Characterization : ");
    if (rich<5.0){
        printf("little or no damage");
    }else if (rich<5.5 && rich>=5.0){
        printf("some damage");
    }else if(rich<6.5 && rich>=5.5){
        printf("serious damage");
    }else if(rich<7.5 && rich>=6.5){
        printf("Disaster");
    }else{
        printf("Catastrophe");
    }
    return 0;
}