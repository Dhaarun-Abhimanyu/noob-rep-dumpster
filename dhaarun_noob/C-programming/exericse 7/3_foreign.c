#include <stdio.h>
int main(){
    float rup_to_yen_value = 1.8834041;
    float *rup_to_yen = &rup_to_yen_value;
    float ruppees;
    printf("\nEnter amount in ruppees : ");
    scanf("%f",&ruppees);
    float *ruppee  = &ruppees;
    printf("\nRuppees : ₹%.2f\nYen : ¥%.2f",*ruppee,*ruppee**rup_to_yen);
    return 0;
}