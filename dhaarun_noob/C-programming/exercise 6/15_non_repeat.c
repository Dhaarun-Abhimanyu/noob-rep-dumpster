#include <stdio.h>
int search(int a[],int n,int target){
    for(int i=0;i<n;i++){
        if(a[i] == target)
            return 1;
    }
    return 0;
}
int main(){
    int n1,n2;
    printf("\nEnter the range separated by commas : ");
    scanf("%d,%d",&n1,&n2);
    printf("\nNumbers without repeating digits : ");
    for(int i=n1;i<=n2;i++){
        int temp=i,n=0,flag=1;
        int temp_arr[10];
        while(temp != 0){
            if(search(temp_arr,n,temp%10)){
                flag = 0;
                break;
            }
            temp_arr[n++] = temp%10;
            temp/=10;
        }
        if(flag)
            printf("%d,",i);
    }
    return 0;
}