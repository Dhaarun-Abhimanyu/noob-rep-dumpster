#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
        int i=0;
        for(i=n-1;i>=1;i--){
            if(strcmp(s[i],s[i-1]) == 1)
                break;
        }
        if(i==0){
            return 0;
        }
        char *temp=(char*)malloc(100*sizeof(char));
        strcpy(temp,s[i]);
        int k=i-1;
        for(int j=i;j<n;j++){
            if(strcmp(s[i-1],s[j]) == -1 && strcmp(temp,s[j]) >= 0){
                k=j;
                strcpy(temp,s[j]);
            }
        }
        strcpy(s[k],s[i-1]);
        strcpy(s[i-1],temp);
        for(int j=i;j<(n+i)/2;j++){
            strcpy(temp,s[j]);
            strcpy(s[j],s[n+i-j-1]);
            strcpy(s[n+i-j-1],temp);
        }
        return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}