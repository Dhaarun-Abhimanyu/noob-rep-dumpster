#include <stdio.h>
#include <stdlib.h>
typedef struct employee{
    char name[50];
    char department[30];
    char empid[7];
    float basic_salary;
    float netpay;
} employee;
float calculate(float x, employee *e){
    float ret=0.0;
    if(x > 10000.0)
        ret = x + 5000 - 0.07*x;
    else
        ret = x + 2000 - 0.05*x;
    e->netpay = ret;
}
int main(){
    employee *e = malloc(sizeof(employee));
    printf("\nEnter Employee name : ");
    scanf("%[^\n]s",e->name);
    printf("Enter department : ");
    scanf("%s",e->department);
    printf("Enter Employee id : ");
    scanf("%s",e->empid);
    printf("Enter basic salary : ");
    scanf("%f",&e->basic_salary);
    calculate(e->basic_salary, e);
    printf("\nEmployee name : %s\nDepartment : %s\nEmployee id : %s\nBasic salary : %.2f\nNet pay : %.2f",e->name,e->department,e->empid,e->basic_salary,e->netpay);
    return 0;
}