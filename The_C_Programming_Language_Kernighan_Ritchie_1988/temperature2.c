#include <stdio.h>

#define    LOWER    0       /* lower limit of table*/
#define    UPPER    300     /* upper limit */
#define    STEP     20      /* step size */

float fahrToCelsius(int tempFahrenheit); /* Converts Fahrenheit to Celsius */

/* print Fahrenheit-Celsius table */
int main() {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
	printf("%3d %6.1f\n", fahr, fahrToCelsius(fahr));
}

float fahrToCelsius(int tempFahrenheit) {

    return (5.0/9.0) * (tempFahrenheit - 32);

}
