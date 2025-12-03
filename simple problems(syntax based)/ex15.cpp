#include <iostream>
#include <fstream>
#include <string>
int main(){
    char firstname[16],lastname[21],filename[13];
    std::cout<<"The program saves your first and last name into a file."<<std::endl;
    std::cout<<"Enter your first name: ";
    std::cin>>firstname;
    std::cout<<"Enter your last name: ";
    std::cin>>lastname;
    std::cout<<"File where you want to save your name: ";
    std::cin>>filename;
    std::ofstream file(filename);
    file << firstname << " " << lastname;
    std::cout<<"Successfully saved the data!";
    return 0;
}
