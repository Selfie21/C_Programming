#include <stdio.h>

int main(){

    int bol = getchar() != EOF;
    printf("%d \n", bol);
    int test = EOF;
    putchar(test);

    int c;
    c = getchar();

    printf("FIRST EOF\n");
    while (c != EOF){
        putchar(c);
        c = getchar();
    }


    printf("SECOND EOF\n");
    long nc;
    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);

    printf("THIRD EOF\n");
    int nl = 0;

    while ((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
    printf("%d\n", nl);



}