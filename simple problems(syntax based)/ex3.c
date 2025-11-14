#include <stdio.h>

void convert(float cash,float conversion_factor){
  printf("Finish markka converted to euro: %.2f",cash/conversion_factor);
}

int main(void) {
  float conversion_factor=5.94573;
  float Finnish_markka;
  printf("Enter your amount:");
  scanf("%f", &Finnish_markka);
  float cash = Finnish_markka;
  convert(cash,conversion_factor);
  return 0;
}
