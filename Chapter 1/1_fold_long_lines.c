#include<stdio.h>

#define line_length 20
#define maxline 1000

int get_line(char s[], int limit);

int main(){
    int len, last_blank, i, j;
    char text[maxline];

    printf("Folding lines <= %d\n", line_length);
    while((len = get_line(text, maxline)) > 0){
        last_blank = -1;
        for( i = 0, j = 0; i < len; i++){
            if(text[i] == ' ' || text[i] == '\t')
                last_blank = i;
            if( j > line_length){
                text[last_blank] = '\n';
                i = last_blank + 1;
                j = 0;
            }
            j++;
        }
        printf("%s", text);
    }
}

int get_line(char s[], int limit)
{
    int c, i;

    for(i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}