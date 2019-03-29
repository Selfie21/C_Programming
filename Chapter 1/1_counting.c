#include <stdio.h>

int main(){

    int c;
    int tabcounter = 0;
    int spacecounter = 0;
    int linecounter = 0;

    printf("COUNTING TEXT\n");
    while((c = getchar()) != EOF)
        if(c == '\t')
            ++tabcounter;
        else if(c == '\n')
            ++linecounter;
        else if(c == ' ')
            ++spacecounter;
    printf("\nTabs: %d\nLines: %d\nSpaces: %d\n", tabcounter, linecounter, spacecounter);


    int d;

    printf("REPLACING SPACES\n");
    while((c = getchar()) != EOF) {
        if (c == ' ') {
            if (d == 0) {
                d = 1;
                putchar(c);
            }

        }

        if(c != ' '){
            d = 0;
            putchar(c);
        }
    }

    printf("REPLACING TABS, BACKSPACES AND BACKSLASHES\n");
    while((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            c = 't';
        }

        if (c == '\b') {
            putchar('\\');
            c = 'b';
        }

        if (c == '\\') {
            putchar('\\');
            c = '\\';
        }
        putchar(c);
    }

    printf("INPUT PER ONE LINE\n");
    int inspace = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n' || c == '\t' || c == ' ') {
            if(inspace == 1)
                putchar('\n');
            inspace = 0;
        }
        else {
            inspace = 1;
            putchar(c);
        }
    }
}
