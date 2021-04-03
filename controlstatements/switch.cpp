#include <iostream>

int main() {
    int x = 20;

    switch(x) {
        case 10:
            std::cout << "case 1" << "\n";
            std::cout << "x is 10" << "\n";
            break;
        case 20:
            std::cout << "case 2" << "\n";
            std::cout << "x is 20" << "\n";
            break;
        case 30:
            std::cout << "case 3" << "\n";
            std::cout << "x is 30" << "\n";
            break;
        case 40:
            std::cout << "case 4" << "\n";
            std::cout << "x is 40" << "\n";
            break;
        default:
            std::cout << "case default" << "\n";
            std::cout << "x is something else" << "\n";
    }

    return 0;
}