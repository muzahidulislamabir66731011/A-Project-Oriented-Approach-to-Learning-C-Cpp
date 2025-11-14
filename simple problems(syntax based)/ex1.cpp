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
