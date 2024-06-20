#include <stdio.h>
struct student{
    char id[10];
    char name[30];
    char gen;
    char sub[5][7];
    int marks[5];
};
void input(struct student *s){
    printf("Enter id : ");
    scanf("%s",s->id);
    printf("Enter name : ");
    scanf("\n");
    scanf("%[^\n]s",s->name);
    printf("Enter gender : ");
    scanf("\n");
    scanf("%c",&s->gen);
    printf("Enter 5 subject codes with their marks :\n");
    for(int i=0;i<5;i++)
        scanf("%s %d",s->sub[i],&s->marks[i]);
}
void display(struct student *s){
    float avg=0.0;
    printf("\nId : %s\nName : %s\nGender : %c\nSubject codes and marks:",s->id,s->name,s->gen);
    for(int i=0;i<5;i++){
        printf("\nSubject : %s\tMarks : %d",s->sub[i],s->marks[i]);
        avg += s->marks[i];
    }
    avg /= 5.0;
    printf("\nAverage : %.2f",avg);
}
int main(){
    int n;
    printf("\nEnter number of students : ");
    scanf("%d",&n);
    struct student s[n];
    printf("\nEnter %d student details:\n",n);
    for(int i=0;i<n;i++){
        printf("\nStudent %d:\n",i+1);
        input(&s[i]);
    }
    printf("\nAll student details:\n");
    for(int i=0;i<n;i++){
        printf("\nStudent %d:\n",i+1);
        display(&s[i]);
    }
    return 0;
}