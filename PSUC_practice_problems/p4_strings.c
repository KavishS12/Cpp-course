//largest and smallest word in a string

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("enter the string:");
    gets(s);
    char words[100][100], small[100], large[100];
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
    n = i + 1;
    strcpy(small, words[0]);
    for(k = 0; k < n; k++){
        if(strlen(small) > strlen(words[k])){
            strcpy(small, words[k]);
        }
    }
    strcpy(large, words[0]);
    for(k = 0; k < n; k++){
        if(strlen(large) < strlen(words[k]))
            strcpy(large, words[k]);
    }

    printf("Smallest word: %s\n", small);
    printf("Largest word: %s", large);

    return 0;
}
