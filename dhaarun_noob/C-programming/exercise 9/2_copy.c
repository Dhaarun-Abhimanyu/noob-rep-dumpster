#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    FILE *file_in = fopen("test_in.txt","r");
    FILE *file_out = fopen("test_out.txt","w");
    if(file_in == NULL || file_out == NULL){
        printf("\nError opening file!!");
        return 0;    
    }
    char *buffer = (char*)malloc(sizeof(char));
    int size = 0;
    int ch;
    while((ch = fgetc(file_in)) != EOF){
        buffer[size++] = ch;
        buffer = (char*)realloc(buffer,(size+1)*sizeof(char));
    }
    buffer[size] = '\0';
    fwrite(buffer,sizeof(char),size,file_out);
    free(buffer);
    fclose(file_in);
    fclose(file_out);
    return 0;
}