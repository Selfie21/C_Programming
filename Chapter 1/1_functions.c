#include <stdio.h>

# define LOWER 0    /* lower limit */
# define UPPER 300  /* upper limit */
# define STEP 20     /* step size   */

double cels_to_fahr(double);

int main() {
    double fahr, celsius;

    fahr = LOWER;
    printf("Fahrenheit\t to \t Celsius\n");
    while (fahr <= UPPER) {
        celsius = cels_to_fahr(fahr);
        printf("%10.0f\t\t%10.2f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}

double cels_to_fahr(double temperature){
    return (5.0/9.0) * (temperature-32.0);
}