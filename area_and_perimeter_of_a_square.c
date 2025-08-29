#include <stdio.h>
int main() {
float L, A, P;
printf("Enter side length (L): ");
scanf("%f", &L);
A = L * L;
P = 4 * L;
printf("Area = %.2f\n", A);
printf("Perimeter = %.2f\n", P);
return 0;
}
