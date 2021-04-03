#include <iostream>

int main() {
    std::cout << "begin" << "\n";

    int mathematics = 88;
    int science = 78;

    if(mathematics >= 80) {
        if(science >= 75) {
            std::cout << "You are a Rockstar!!" << "\n";
        } else {
            std::cout << "You are a Gem!!" << "\n";
        }
    } else {
        if(science >= 65) {
            std::cout << "You are good!!" << "\n";
        } else {
            std::cout << "You are an average student, practice more." << "\n";
        }
    }

    std::cout << "end" << "\n";
    return 0;
}