#include <stdio.h>
int main() {
int a, b, temp;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);
printf("Before swap: a = %d, b = %d\n", a, b);
temp = a;
a = b;
b = temp;
printf("After swap: a = %d, b = %d\n", a, b);
return 0;
}
