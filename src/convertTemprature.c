#include <stdio.h>

void convertCelsius(int upper, int step) {
    int celsius = upper;
    printf("Fahrenheit\tCelsius\n");
    for (celsius; celsius >= 0; celsius = celsius - step) {
        printf("%10.1f\t%7d\n", celsius, celsius * (9.0 / 5.0) + 32.0);
    }
}

void convertFahrenheit(int upper, int step) {
    int fahr = upper;
    printf("Celsius\tFahrenheit\n");
    for (fahr; fahr >= 0; fahr = fahr - step) {
        printf("%7d\t%10.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}

#define CELSIUS_UPPER 100
#define CELSIUS_STEP 5
#define FAHRENHEIT_UPPER 300
#define FAHRENHEIT_STEP 20

void main() {
    convertCelsius(CELSIUS_UPPER, CELSIUS_STEP);
    convertFahrenheit(FAHRENHEIT_UPPER, FAHRENHEIT_STEP);
}
