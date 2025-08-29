#include <stdio.h>
int main() {
float H, L, A;
printf("Enter height (H) and base (L): ");
scanf("%f %f", &H, &L);
A = (H * L) / 2.0f;
printf("Area = %.2f\n", A);
return 0;
}
