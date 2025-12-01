#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("numbers.s");
    if (!file) {
        std::cout << "Unable to open file for reading." << std::endl;
        return 1;
    }
    
    int nums[4];
    for (int i = 0; i < 4; i++) {
        file >> nums[i];
    }
        std::cout << "Numbers found in the file numbers.s:\n";
        std::cout << nums[0] << ", " << nums[1] << ", " << nums[2] << " and " << nums[3] << std::endl;
        int sum = nums[0] + nums[1] + nums[2] + nums[3];
        std::cout << "Sum of the numbers: " << sum << std::endl;
        file.close();
        return 0;
}
