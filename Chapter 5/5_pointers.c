#include <stdio.h>

int main(){


    int f = 4;
    int *ptr = &f;

    int *daytab[13];
    daytab[0] = ptr;

    struct element{
        int value;
        int key;
        char used;
    };

    struct element table[10];
    for(int i = 0; i < 10; i++)
        printf("%c\n", table[i].used);


}