#include <iostream>
#include <cctype>
int main()
{
    int score;
    int sum=0;
    int count=0;
    char option;
    do{
        std::cout <<"Enter the score (4-10): "  << std::endl;
        std::cin >> score;
        if(score >= 4 && score <= 10){
            sum += score;
            count++;
        }
        std::cout << "Do you have more scores left? (y/n): " << std::endl;
        std::cin >> option;
        option=tolower(option);
    }while(option=='y');
    float average = (float)sum / count;
    std::cout << "You entered "<<count <<" scores." << std::endl;
    std::cout << "Avarage score: "<<average << std::endl;
    return 0;
}
