#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("\nEnter a string terminated by a #: ");
    scanf("%[^#]s",&s);
    for(int i=0;i<strlen(s);i++){
        int c=(int)s[i];
        if(c >= 97 && c <= 122)
            s[i] = (char)(c - 32);
        else if(c >= 65 && c <= 90)
            s[i] = (char)(c + 32);
    }
    printf("\nString after swapping : %s",s);
    return 0;
}