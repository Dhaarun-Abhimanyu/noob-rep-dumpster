#include <stdio.h>
int odd(int x){
    return x%2;
}
int main(){
    int size,count=0;
    printf("\nEnter number of terms : ");
    scanf("%d",&size);
    int a[size];
    int disp[size];
    printf("\nEnter %d elements : ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
        if(odd(a[i]))
            disp[count++] = a[i];
    }
    for(int i=0;i<size;i++){
        if(!odd(a[i]))
            disp[count++] = a[i];
    }
    printf("\nOdd and even elements : ");
    for(int i=0;i<size;i++)
        printf("%d,",disp[i]);
    return 0;
}