#include <iostream>
int main()
{
    int days;
    do{
        std::cout<<"The program calculates the total hours worked during\na specific period and the average length of a day.\n";
        std::cout<<"How many days:";
        std::cin>>days;
    } while(days>30);
    int i;
    float total=0;
    float hours[days];
    for(i=1;i<=days;i++){
        std::cout<<"Enter the working hours for day "<<i<<": ";
        std::cin>>hours[i];
        total += hours[i];
    }
    std::cout<<"\nTotal hours worked: "<<total;
    std::cout<<"\nAverage length of day: "<<total/days;
    return 0;
}
