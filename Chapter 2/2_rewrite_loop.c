#include <stdio.h>

int main(){
    int i, c;
    int lim = 50;

    //original
    for(i = 0; i < lim-1 && (c=getchar()) != '\n' && c!= EOF; ++i){
        putchar(c);
        putchar('\n');
    }

    for(i = 0; ((i < lim-1) == 1) == ((c=getchar() != '\n') == 1) == ((c != EOF) == 1); ++i){
        printf("It's working!\n");
    }
}
