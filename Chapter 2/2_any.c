#include <stdio.h>

int any(char s[], char t[]);

int main(){
    char s1[] = "testing lalala 123";
    char s2[] = "laz";
    int num = any(s1,s2);
    printf("%d\n", num);
}

int any(char s[], char t[]){
    int i, j;

    for(i = 0; s[i] != '\0'; i++){
        for(j = 0; t[j] != '\0'; j++){
            if(s[i] == t[j])
                return i + 1;
        }
    }

    return -1;
}