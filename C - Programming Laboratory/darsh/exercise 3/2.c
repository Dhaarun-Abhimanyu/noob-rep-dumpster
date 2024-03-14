#include<stdio.h>
int main(){
    int n;
    printf("Enter input parameter : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int h=0;h<=n;h++){
            if(h>(5-i))
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d",j+i);
        }
        printf("\n");
    }
    for(int i=0;i<=n;i++){
        for(int h=0;h<=n;h++){
            if(h>(n-i))
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}