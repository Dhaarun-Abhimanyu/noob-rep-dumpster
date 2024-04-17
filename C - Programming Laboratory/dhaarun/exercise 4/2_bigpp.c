#include <stdio.h>
int search(int num,int a[]){
    for(int i=0;i<num;i++){
        if(num == a[i])
            return i+1;
    }
    return -1;
}
void main(){
    int n;
    printf("Enter no of terms : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int insert,index;
    printf("\nEnter element to be inserted and index : ");
    scanf("%d,%d",&insert,&index);
    int temp;
    n++;
    for(int i=0;i<n;i++){
        if(i == index){
            temp = a[i];
            a[i] = insert;
        }
        else if(i>index){
            int swap = temp;
            temp = a[i];
            a[i] = swap;
        }
        else
            continue;
    }
    printf("\nElement after insertion : ");
    for(int i=0;i<n;i++)
        printf("%d,",a[i]);

    int del;
    printf("\nEnter element to be deleted : ");
    scanf("%d",&del);
    for(int i=0;i<n;i++){
        if(a[i] == del){
            for(int j=i;j<n;j++){
                a[j] = a[j+1];
            }
            break;
        }
    }
    n--;
    printf("\nElement after deletion : ");
    for(int i=0;i<n;i++)
        printf("%d,",a[i]);

    int search_num;
    printf("\nEnter element to be searched : ");
    scanf("%d",&search_num);
    if(search(search_num,a) == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n",search(search_num,a));
}