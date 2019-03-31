#include <stdio.h>
#include <ctype.h>

int hexastring_to_int(char s[]);
int char_to_int(char s);

int main(){

    char name[]="0xa23";
    int test = hexastring_to_int(name);
    printf("Result: %d\n", test);
}

int hexastring_to_int(char s[]){

    int i, num;
    int n = 0;

    if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;
    else
        i = 0;

    while(s[i] != '\0'){
        num = char_to_int(s[i]);
        if(num > 15)                    //error wrong char in conversion!
            return 0;
        n = (n * 16) + (num);
        ++i;
    }
    return n;

}

int char_to_int(char s){
    if(isdigit(s))
        return s - '0';
    else{
        tolower(s);
        return (s - 'a') + 10;
    }
}