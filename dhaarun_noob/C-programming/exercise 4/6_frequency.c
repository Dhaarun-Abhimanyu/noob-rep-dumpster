#include <stdio.h>
int main(){
    int size,f_size=0,f,flag;
    printf("\nEnter size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter %d elements :\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int ele[size];
    int freq[size];
    for(int i=0;i<size;i++){
        flag=0;
        for(int j=0;j<f_size;j++){
            if(a[i] == ele[j]){
                freq[j]++;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            f_size++;
            ele[f_size-1] = a[i];
            freq[f_size-1] = 1;
        }
    }
    printf("\nFrequency :\n");
    for(int i=0;i<f_size;i++)
        printf("%d : %d\n",ele[i],freq[i]);
    return 0;
}



/*
[1,2,1,2,3]

outer:
for(int i=0;i<size;i++){
    count = 0;
    for(int k=0;k<i;k++){
        if(arr[i] == arr[k]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        continue;
    }

    for(int j=0;j<size;j++){
        if(arr......)
    }
    printf("\nFrequency of %d is %d",a[i],count);
}


*/