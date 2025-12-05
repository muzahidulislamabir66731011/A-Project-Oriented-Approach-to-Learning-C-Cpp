
#include <iostream>
void change_number(int x){
    std::cout<<"In the subroutine: x = "<<x+3<<std::endl;
}
int main(){
    int x;
    std::cout<<"Enter the number x: ";
    std::cin>>x;
    std::cout<<"In the main program: x = "<<x<<std::endl;
    change_number(x);
    std::cout<<"In the main program: x = "<<x<<std::endl;
    return 0;
    
}
