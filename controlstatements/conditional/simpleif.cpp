#include <iostream>

int main() {
    std::cout << "begin" << "\n";

    int balance = 1000;  // current balance in account
    int amount = 2000;  // amount to be withdrawn

    // Decide whether to allow or not,
    if (amount < balance) {
        std::cout << "You can withdraw" << "\n";
    }

    std::cout << "end";

    return 0;
}