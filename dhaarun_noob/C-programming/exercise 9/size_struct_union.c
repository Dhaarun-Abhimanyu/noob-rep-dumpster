#include <stdio.h>
typedef struct {
    char name[50];
    int rollno;
    float marks;
    char department[30];
    char grade;
} StudentStruct;
typedef union {
    char name[50];
    int rollno;
    float marks;
    char department[30];
    char grade;
} StudentUnion;

int main() {
    StudentStruct s1;
    StudentUnion u1;
    printf("Size of student structure: %d bytes\n", sizeof(s1));
    printf("Size of student union: %d bytes\n", sizeof(u1));
    return 0;
}