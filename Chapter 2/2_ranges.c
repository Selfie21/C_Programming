#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){


    printf("\nBits of type char: %d\n\n", CHAR_BIT);

    printf("Maximum numeric value of type char: %d\n", CHAR_MAX);
    printf("Minimum numeric value of type char: %d\n\n", CHAR_MIN);

    printf("Maximum value of type signed char: %d\n", SCHAR_MAX);
    printf("Minimum value of type signed char: %d\n\n", SCHAR_MIN);

    printf("Maximum value of type unsigned char: %u\n\n", (unsigned) UCHAR_MAX);

    printf("Maximum value of type short: %d\n", SHRT_MAX);
    printf("Minimum value of type short: %d\n\n", SHRT_MIN);

    printf("Maximum value of type unsigned short: %u\n\n", (unsigned) USHRT_MAX);


    printf("Maximum value of type int: %d\n", INT_MAX);
    printf("Minimum value of type int: %d\n\n", INT_MIN);

    printf("Maximum value of type unsigned int: %u\n\n", UINT_MAX);

    printf("Maximum value of type long: %ld\n", LONG_MAX);
    printf("Minimum value of type long: %ld\n\n", LONG_MIN);

    printf("Maximum value of type unsigned long: %lu\n\n", ULONG_MAX);


    signed short int test = -1;
    int counter = 0;
    while(test != 0){
        ++counter;
        test = test * 2;
        printf("%d \t doing 2^%d\n", test, counter);
    }

}