#include <stdio.h>
int main() {
float rupees, dollars;
printf("Enter rupees: ");
scanf("%f"
, &rupees);
dollars = rupees / 48.0f;
printf("Dollars = %f\n"
, dollars);
return 0;
}