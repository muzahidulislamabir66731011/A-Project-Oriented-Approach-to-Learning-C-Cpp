#include <iostream>
int largest(int num1,int num2,int num3){
    int result=num1;
    if(num2>result) result=num2;
    if(num3>result) result=num3;
    return result;
}
int smallest(int num1,int num2,int num3){
    int result=num1;
    if(num2<result) result=num2;
    if(num3<result) result=num3;
    return result;
}
int main()
{
    int num1;
    int num2;
    int num3;
    std::cout<<"Enter the 1. number: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter the 2. number: "<<std::endl;
    std::cin>>num2;
    std::cout<<"Enter the 3. number: "<<std::endl;
    std::cin>>num3;
    std::cout<<"Among the numbers you entered,the largest was "<<largest(num1,num2,num3)<<" and the smallest was "<<smallest(num1,num2,num3);
    
    return 0;
}
