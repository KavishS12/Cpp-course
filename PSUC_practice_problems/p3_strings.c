//extracting words in a string

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("enter the string:");
    gets(s);
    char words[100][100];
    int i ,j, k, n;
    i=j=0;
    for(k=0; k<strlen(s); k++){
        if(s[k] != ' ' && s[k] != '\0'){
            words[i][j++] = s[k];
        }
        else{
            words[i][j] = '\0';
            i++;
            j = 0;
        }
    }
    for(k=0;k<=i;k++){
        printf("%s\n",words[k]);
    }
    return 0;
}

