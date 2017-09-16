#include <stdio.h>

void convertCelcius(int upper, int step) {
    int celcius = upper;
    printf("Fahrenheit\tCelcius\n");
    for (celcius; celcius >= 0; celcius = celcius - step) {
        printf("%10.1f\t%7d\n", celcius, celcius * (9.0 / 5.0) + 32.0);
    }
}

void convertFahrenheit(int upper, int step) {
    int fahr = upper;
    printf("Celcius\tFahrenheit\n");
    for (fahr; fahr >= 0; fahr = fahr - step) {
        printf("%7d\t%10.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}

void main() {
    convertCelcius(100, 5);
    convertFahrenheit(300, 20);
}
