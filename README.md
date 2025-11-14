
```C language
#include <stdio.h>

void input(int number) {
    printf("The number was: %d\n", number);
}

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    input(number);
    return 0;
}

```
```C++ language
#include <iostream>

void input(int number){
  std::cout<< "The number was: "<< number<<std::endl;
}
  int main() {
    int number;
    std::cout<< "Enter a number : "<<std::endl;
    std::cin >> number;
    input(number);
    return 0;
}
```

```C language
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

```
```Cpp language
#include <iostream>

float input(float number){
  return number*number;
}
  int main() {
  float num;
  float number;
  std::cout << "Enter your number: "<< std::endl;
  std::cin >> number;
  num =input(number);
  std::cout << "The square of the number is "<< num << std::endl;
  return 0;
}
```
```C language
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

```
```Cpp language

```
