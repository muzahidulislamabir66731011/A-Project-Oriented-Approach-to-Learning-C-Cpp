#include <iostream>

int main()
{
    char drink;
    int cups;
    std::cout << "Do you drink coffee or tea (c/t)?" << std::endl;
    std::cin >> drink;
    std::cout << "How many cups do you drink daily: " << std::endl;
    std::cin >> cups;

    if (drink == 'c' && cups >= 0 && cups <= 2) {
        std::cout << "You don't drink a lot of coffee, do you?" << std::endl;
    } else if (drink == 'c' && cups >= 3) {
        std::cout << "You drink a lot of coffee!" << std::endl;
    } else if (drink == 't' && cups >= 0 && cups <= 2) {
        std::cout << "You do not drink a lot of tea." << std::endl;
    } else if (drink == 't' && cups >= 3) {
        std::cout << "You drink a lot of tea!" << std::endl;
    } else {
        std::cout << "An error occurred in the program!" << std::endl;
    }

    return 0;
}
