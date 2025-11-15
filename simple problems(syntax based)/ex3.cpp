#include <iostream>
void convert(float cash,float conversion_factor){
    std::cout << "Finish markka converted to euro:" <<cash/conversion_factor<< std::endl;
}
int main()
{
    float conversion_factor=5.94573;
    float Finnish_markka;
    std::cout << "Enter your amount:" << std::endl;
    std::cin >> Finnish_markka;
    float cash = Finnish_markka;
    convert(cash,conversion_factor);
    return 0;
}
