#include <stdio.h>

void escape(char s[], char t[]);

int main(){

    char s[] = "test    ing \n";
    char t[30];

    printf("%s             %s \n", s, t);

}

void escape(char s[], char t[]){

    int i;
    char c, f;

    for(i = 0; s[i] != '\0'; i++){
        c = s[i];
        switch(c){
            case '\n':
                t[i++] = '\\';
                t[i] = 'n';
                break;
            case '\t':
                t[i++] = '\\';
                t[i] = 't';
                break;
            case '\f':
                t[i++] = '\\';
                t[i] = 'f';
                break;
            default:
                t[i] = s[i];
                break;
        }

    }
}

