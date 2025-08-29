#include <stdio.h>
int main() {
float fahrenheit, celsius;
printf("Enter Fahrenheit: ");
scanf("%f", &fahrenheit);
celsius = (5.0f / 9.0f) * (fahrenheit - 32.0f);
printf("Celsius = %.2f\n", celsius);
return 0;
}
