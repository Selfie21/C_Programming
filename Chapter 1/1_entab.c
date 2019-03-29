#include <stdio.h>

#define line_limit 1000
#define tabs_to_spaces 4

int get_line(char s[], int limit);

int main(){

    char text[line_limit];
    int len, i, spacecounter;

    while( (len = get_line(text, line_limit))){
        for(i = 0; text[i] != '\0'; i++){
            if(text[i] == ' '){
                ++spacecounter;
                if(spacecounter >= tabs_to_spaces){
                    putchar('\t');
                    spacecounter = 0;
                }

            }else {
                putchar(text[i]);
                spacecounter = 0;
            }
        }
    }
}

int get_line(char s[], int limit){

    int i;
    char c;

    for(i = 0; i < limit && ((c = getchar()) != EOF) && s[i] != '\n'; i++){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = '\n';
        i++;
    }
    s[i] = '\0';
    return i;
}