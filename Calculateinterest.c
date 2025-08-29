#include <stdio.h>
int main() {
float P=23, R=15, N=7, I;
printf("Enter Principal (P), Rate (R in %), and Time (N in years): ");
scanf("%f %f %f", &P, &R, &N);
I = (P * R * N) / 100.0f;
printf("Interest = %.2f\n", I);
return 0;
}
