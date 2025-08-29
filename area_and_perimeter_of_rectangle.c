#include <stdio.h>
int main() {
float L, B, A, P;
printf("Enter length (L=23) and breadth (B=15): ");
scanf("%f %f", &L, &B);
A = L * B;
P = 2 * (L + B);
printf("Area = %.2f\n", A);
printf("Perimeter = %.2f\n", P);
return 0;
}
