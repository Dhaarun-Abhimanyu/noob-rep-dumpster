#include<stdio.h>
int main(){
    char name[20];
    printf("Enter name : ");
    scanf("%s",name);
    int marks[5];
    int total=0;
    for(int i =0;i<5;i++){
        printf("Enter mark %d - ",i+1);
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    printf("\nName of the student : %s\n",name);
    printf("Total marks scored : %d\n",total);
    printf("Percentage : %.2f%%\n",(float)total/5);
    float percent = total/5;
    if (percent > 90){
        printf("The student passed with distinction");
    }else if (percent>80){
        printf("The student passed with first class");
    }else if (percent>70){ 
        printf("The student passed with seconf class");
    }else if (percent>60){
        printf("The student passed with third class");
    }else{
        printf("The student failed in the exams");
    }
    return 0;
}