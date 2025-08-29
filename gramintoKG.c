#include <stdio.h>
int main() {
float grams, kilograms;
printf("Enter weight in grams: ");
scanf("%f", &grams);
kilograms = grams / 1000.0;
printf("%.2f grams is equal to %.3f kilograms.\n", grams, kilograms);
return 0;
}
