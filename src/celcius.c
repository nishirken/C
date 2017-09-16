#include <stdio.h>

int convertTemprature(int upper, int step) {
    float celcius = 0.0;
    float fahr = 0.0;

    if (upper > 100) {
        printf("Fahrenheit\tCelcius\n");
        while (fahr <= upper) {
            celcius = (5.0 / 9.0) * (fahr - 32.0);
            printf("%10.0f\t%7.1f\n", fahr, celcius);
            fahr = fahr + step;
        }
    } else {
        printf("Celcius\tFahrenheit\n");
        while (celcius <= upper) {
            fahr = celcius * (9.0 / 5.0) + 32.0;
            printf("%7.0f\t%10.1f\n", celcius, fahr);
            celcius = celcius + step;
        }
    }
    return 0;
}

int main() {
    convertTemprature(300, 20);
    convertTemprature(100, 5);
    return 0;
}
