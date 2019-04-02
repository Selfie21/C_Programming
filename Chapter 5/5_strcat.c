#include <stdio.h>

void strcatt(char *s, char *t);
int strend(char *s, char *t);
int main(){
    char s[20] = "Hello ";
    char t[] = "World!";
    strcatt(s,t);

    printf("%s \n",s);
    printf("%d \n", strend(s,t));
}

void strcatt(char *s, char *t){

    while(*s != '\0')
        s++;

    while((*s++ = *t++) != '\0')
        ;
}

int strend(char *s, char *t){

    char *beginning = t;

    while(*s != '\0')
        s++;

    while(*t != '\0')
        t++;

    while(*s == *t){
        if(beginning == t){
            return 1;
        }
        s--;
        t--;
    }
    return 0;
}

