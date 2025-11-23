#include <iostream>

int main()
{
    int number;
    int factorial=1;
    int i;
    std::cout << "Enter an integer :" << std::endl;
    std::cin >> number;
    for(i=1;i<=number;i++){
        factorial *=i;
    }
    std::cout << "The factorial of "<<number<<" is "<<factorial << std::endl;
    return 0;
}

