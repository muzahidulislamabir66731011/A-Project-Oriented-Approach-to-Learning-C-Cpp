#include <iostream>

int main()
{
    int num;
    std::cout << "Enter your number: " << std::endl;
    std::cin >> num;
    if(num%2==0){
        printf("The number is Even");
        
    }
    else{
        printf("The number is Odd");
    }
    return 0;
}
