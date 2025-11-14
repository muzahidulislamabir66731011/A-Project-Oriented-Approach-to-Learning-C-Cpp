#include <stdio.h>

float input(float number) {
    return number*number;
}

int main(void) {
  float number;
  printf("Enter your number:");
  scanf("%f", &number);
  float mynum = input(number);
  printf("The square of the number is : %.2f",mynum);
  return 0;
}
