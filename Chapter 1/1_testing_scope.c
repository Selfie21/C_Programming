#include<stdio.h>

#define line_length 5
#define maxline 1000

int get_line(char s[], int limit);
int reverse(char s[]);

int main(){
    int len;
    int i = 0;
    char text[maxline];
    char test[5];

    printf("Only Printing Lines smaller than x \n");
    while((len = get_line(text, maxline)) > 0){
        if( len > line_length){
            printf("%s", text);
        }
    }


    printf("Reversing Now: \n");
    test[0] = 'a';
    test[1] = 'b';
    test[2] = 'c';
    test[3] = 'd';
    test[4] = 'e';
    printf("%s\n", test);
    reverse(test);
    printf("%s\n", test);
}

int get_line(char s[], int limit){
    int i, c;
    for( i = 0; i < limit && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int reverse(char s[])
{
    char temp;
    int i, j;

    j = 0;
    while(s[j] != '\0'){
        j++;
    }

    --j;

    for(i = 0; (j-i) >= 1; i++)
    {
        temp   = s[i];
        s[i] = s[j];
        s[j] = temp;
        --j;
    }

    return 0;
}