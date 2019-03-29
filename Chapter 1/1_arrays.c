#include <stdio.h>

int main(){


    printf("Counting Word Lengths Histogram: \n");
    int c;
    int inspace = 0;
    int counter = 0;
    int wordcount[20];

    for(int i = 0; i< 20; i++){
        wordcount[i] = 0;
    }

    while((c = getchar()) != EOF){
        if(c == '\n' || c == '\t' || c == ' ') {
            if(inspace == 1){
                ++wordcount[counter];
                counter = 0;
            }
            inspace = 0;
        }
        else {
            ++counter;
            inspace = 1;
        }
    }

    putchar('\n');
    for(int i = 0; i < 20; i++){
        printf("%d", i);
        putchar(':');
        while(wordcount[i] > 0){
            putchar('|');
            --wordcount[i];
        }
        putchar('\n');
    }


    printf("Counting different Chars in Segment (Histogram): \n");
    counter = 0;
    int charcount[127];

    for(int i = 0; i< 127; i++){
        charcount[i] = 0;
    }

    while((c = getchar()) != EOF){
        ++charcount[c];
    }

    putchar('\n');
    for(int i = 0; i < 127; i++){
        char printer = i;
        printf("%c", printer);
        putchar(':');
        while(charcount[i] > 0){
            putchar('|');
            --charcount[i];
        }
        putchar('\n');
    }

}