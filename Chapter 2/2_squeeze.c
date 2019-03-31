#include <stdio.h>

void squeeze(char s[], char t[]);

int main(){
    char s[] = "testing";
    char t[] = "t";

    squeeze(s,t);
    printf("%s\n", s);
}

void squeeze(char s[], char t[]){
    int i, j, l;
    char c;

    for(i = j = 0; s[i] != '\0'; i++){
        for(l = 0; t[l] != '\0'; l++){
            c = t[l];
            if(s[i] != c)
                s[j++] = s[i];
        }
    }
    s[j] = '\0';
}