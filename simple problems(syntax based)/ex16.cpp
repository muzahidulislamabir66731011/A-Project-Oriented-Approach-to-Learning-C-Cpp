#include <iostream>
#include <fstream>
#include <string>
struct Person {
    char firstname[10];
    char lastname[10];
    char telephone[11];
};
int main()
{
    Person new_person;
    std::cout << "Enter first name: ";
    std::cin >> new_person.firstname;
    std::cout << "Enter lastname name: ";
    std::cin >> new_person.lastname;
    std::cout << "Enter telephone number: ";
    std::cin >> new_person.telephone;
    std::ofstream file("phonedir.txt", std::ios::app);
    if (!file.is_open()) {
        std::cout << "Unable to open file." << std::endl;
        return 1;
    }
        file << new_person.firstname << " " 
             << new_person.lastname << " " 
             << new_person.telephone << std::endl;
    std::cout << "Successfully saved the data." << std::endl;
    return 0;
}
