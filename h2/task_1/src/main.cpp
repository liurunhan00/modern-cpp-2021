#include <iostream>
#include <random>
#include <cstdlib>


int main() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> u_dis(0, 99);
    int random_num = u_dis(mt);
    while (1) {
        std::cout << "input a number between 0 and 99" << std::endl;
        int input;
        std::cin >> input;
        if (!std::cin.fail()) {
            if (0 <= input && 99 >= input) {
                if (input > random_num) {
                    std::cout << "> Random" << std::endl;
                } else if (input < random_num) {
                    std::cout << "< Random" << std::endl;
                } else {
                    break;
                }
            } else {
                std::cerr << "[WARRING] : Number must be between 0 and 99" << std::endl;
            }
        } else {
            std::cout << "Error encountered, exiting..." << std::endl;
            exit(EXIT_FAILURE);
        }
    }
    std::cout << "Random number is: " << random_num << ". Congratulations!" << std::endl;
    exit(EXIT_SUCCESS);
}
