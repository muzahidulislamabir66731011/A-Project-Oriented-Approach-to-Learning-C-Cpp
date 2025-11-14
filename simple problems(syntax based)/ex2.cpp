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
