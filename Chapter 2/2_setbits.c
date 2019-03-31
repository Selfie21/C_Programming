#include <stdio.h>

int setbits(unsigned x, int p, int n, unsigned y);
unsigned getbits(unsigned x, int p, int n);

int main(){
    int num = setbits(2555, 5, 2, 312);
}

int setbits(unsigned x, int p, int n, unsigned y){
    int mask = ~(~0 << n) << (p - n + 1);
    x &= ~mask;

    y = getbits(y, p, n);
    y <<= (p - n + 1);

    return x | y;
}

int invert(unsigned x, int p, int n){

    unsigned mask = (~(~0 << p)) ^ ~(~0 << p-n);
    return ((x & ~mask) | (~x & mask));
}

unsigned getbits(unsigned x, int p, int n){
    return (x >> (p+1-n)) & ~(~0 << n);
}