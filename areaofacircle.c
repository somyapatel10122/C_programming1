#include <stdio.h>
int main() {
float R, A;
printf("Enter radius (R=15): ");
scanf("%f", &R);
A = (22.0f / 7.0f) * R * R;
printf("Area = %.2f\n", A);
return 0;
}
