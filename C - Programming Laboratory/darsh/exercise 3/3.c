#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter co-efficients of x^2,x,constant term :");
    float r1,r2;
    scanf("%d,%d,%d",&a,&b,&c);
    printf("The given quadratic eqn is : (%d x^2) + (%d x) + (%d) \n",a,b,c);
    float d =(b*b)-(4*a*c);
    if(d<0){
        printf("The roots are %.2f + %.2f i",(float)-(b/(2*a)),sqrt(-d)/(2*a));
        printf(", %.2f - %.2f i",(float)-(b/(2*a)),sqrt(-d)/(2*a));
    }else{
         r1 = ((-b)+sqrt(d))/(2*a);
         r2 = ((-b)-sqrt(d))/(2*a);
         printf("The roots are %.2f , %.2f",r1,r2);
    }
    
    
    return 0;
}