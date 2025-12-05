#include <iostream>
#include <fstream>
#include <string>
struct Person{
    char firstname[20];
    char lastname[20];
    char telephone[11];
};
int main(){
    std::ifstream file("phonedir.txt");
    if (!file.is_open()) {
        std::cout << "Unable to read file." << std::endl;
        return 1;
    }
    Person current;
    int entries = 0;
    file >> entries;
    for (int i = 0; i < entries; i++) {
        file >> current.firstname >> current.lastname >> current.telephone;
        std::cout << current.firstname << " " 
                  << current.lastname << " " 
                  << current.telephone << std::endl;
    }
    return 0;
}
