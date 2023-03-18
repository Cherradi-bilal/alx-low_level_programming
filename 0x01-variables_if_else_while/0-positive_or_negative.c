#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL)); // do not touch this code

    int n = rand() % 201 - 100; // do not touch this code

    std::cout << "The number " << n << " is ";

    if (n > 0) {
        std::cout << "positive";
    } else if (n == 0) {
        std::cout << "zero";
    } else {
        std::cout << "negative";
    }

    std::cout << std::endl;

    return 0;
}

