#include <stdio.h>
int main() {
float kg, grams;
printf("Enter kilograms: ");
scanf("%f", &kg);
grams = kg * 1000.0f;
printf("Grams = %f\n", grams);
return 0;
}
