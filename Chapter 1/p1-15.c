/* 
Rewrite the temperature conversion program of Section
1.2 to use a function for conversion.
*/

#include <stdio.h>

float tempf2c(float f);
float tempc2f(float c);

float tempf2c(float fahr)
{
    float c;
    c = 5.0 * (fahr - 32.0) / 9.0;
    return c;
}

float tempc2f(float celsius)
{
    float f;
    f = celsius * 9.0 / 5.0 + 32.0;
    return f;
}

int main()
{
    float f, c;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    f = lower;
    while (f <= upper) {
        c = tempf2c(f);
        printf("%3.0f  %6.1f\n", f, c);
        f = f + step;
    }
    printf("\n");
    c = upper;
    while (c >= lower) {
        f = tempc2f(c);
        printf("%3.0f  %6.1f\n", c, f);
        c = c - step;
    }
}
