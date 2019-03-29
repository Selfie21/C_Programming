#include<stdio.h>

# define LOWER 0    /* lower limit */
# define UPPER 300  /* upper limit */
# define STEP 20     /* step size   */
int main() {
    double fahr, celsius;

    fahr = LOWER;
    printf("Fahrenheit\t to \t Celsius\n");
    while (fahr <= UPPER) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f\t\t%10.2f\n", fahr, celsius);
        fahr = fahr + STEP;
    }

    celsius = LOWER;
    printf("\nCelsius\t to \t Fahrenheit\n");
    while(celsius <= UPPER) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%10.0f\t\t%10.2f\n", celsius, fahr);
        celsius = celsius + STEP;
    }

    printf("\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
