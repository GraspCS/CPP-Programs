#include <iostream>

int main() {
    int n = 8;

    for (int i = 1; i <= 10; ++i)
        std::cout << n << " * " << i << " = " << n * i << "\n";

    std:: cout << "loop ends";

    return 0;
}