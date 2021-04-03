#include <iostream>

int main() {
    char c = 'e';

    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            std::cout << c << " is a vowel";
            break;
        default:
            std::cout << c << " is a consonant";
    }

    return 0;
}