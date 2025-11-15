#include <iostream>
void addition(float num1,float num2){
    std::cout << num1<<"+"<<num2<<"="<<num1+num2<< std::endl;
}
void subtraction(float num1,float num2){
    std::cout << num1<<"-"<<num2<<"="<<num1-num2<< std::endl;
}
void multiplication(float num1,float num2){
    std::cout << num1<<"x"<<num2<<"="<<num1*num2<< std::endl;
}

void division(float num1,float num2){
    std::cout << num1<<"/"<<num2<<"="<<num1/num2<< std::endl;
}

int main(){
    float num1;
    float num2;
    char operatorx;
    std::cout << "Enter number 1:";
    std::cin >> num1;
    std::cout << "Enter number 2:";
    std::cin >> num2;
    std::cout << "Select your operator (+, -, *, /): ";
    std::cin >> operatorx;
    if(operatorx =='+'){
        addition(num1,num2);
    }
    else if(operatorx =='-'){
        subtraction(num1,num2);
    }
    else if(operatorx =='*'){
        multiplication(num1,num2);
    }
    else if(operatorx =='/'){
        division(num1,num2);
    }
    return 0;
}
