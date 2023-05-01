#include <stdio.h>

#define LOWER 0   // lower limit of temp scale
#define UPPER 300 // upper limit
#define STEP 20   // step size

/* print Farenheit-Celsius table
    for farh = 0, 20, ... , 300; floating point version */
int main() {
    float fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("3.0%f\t6.0%f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
