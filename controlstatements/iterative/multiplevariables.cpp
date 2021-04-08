#include <iostream>

int main() {

    // here we have 2 variable i and j in the for loop
    for (int i = 1, j = 10; i <= 10, j > 5; ++i, --j) {
        std::cout << "i = " << i << " j = " << j << "\n";
    }

    return 0;
}