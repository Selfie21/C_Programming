#include <stdio.h>
#include <string.h>

int expand(char s[], char t[]);

int main(){
    char s[] = "a-z blabla hello my name is";
    char t[100];

}

int expand(char s[], char t[]){
    int i;

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == '-' ){
            char start = s[--i];
            char end = s[i+=2];
            printf("%c        %c\n", start, end);
            switch(start){
                case ((s[i] >= 'a') && (s[i] <= 'z')):
                    for(j = i; t[j] != (end + 1); j++){
                        t[j] = start++;
                    }
                    break;
            }
        }
    }
}