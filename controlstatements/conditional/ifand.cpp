#include <iostream>

int main() {
    std::cout << "begin" << "\n";

    int age = 19;
    int marks = 65;

    if(age >= 18 && marks >= 70) {
        std::cout << "You will get a driving license." << "\n";
    } else {
        std::cout << "Please try again later" << "\n";
    }

    std::cout << "end" << "\n";
    return 0;
}