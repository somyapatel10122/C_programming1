#include <stdio.h>
int main() {
float gross, discount, net;
printf("Enter gross sales: ");
scanf("%f", &gross);
discount = 0.10f * gross;
net = gross - discount;
printf("Discount (10%%) = %.2f\n", discount);
printf("Net Sales = %.2f\n", net);
return 0;
}
