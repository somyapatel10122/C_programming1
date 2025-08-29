#include <stdio.h>
int main() {
double bytes, KB, MB, GB;
printf("Enter bytes: ");
scanf("%lf", &bytes);
KB = bytes / 1024.0;
MB = bytes / (1024.0 * 1024.0);
GB = bytes / (1024.0 * 1024.0 * 1024.0);
printf("KB = %.2f\n", KB);
printf("MB = %.2f\n", MB);
printf("GB = %.2f\n", GB);
return 0;
}
