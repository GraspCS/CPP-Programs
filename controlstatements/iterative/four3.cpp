#include <iostream>

int main() {

    // here we have counter variable that tells how many times loop executed
    for(int i = 10, counter = 1; i <= 10000; i *= 10, ++counter) {
        std::cout << "Loop working " << counter << " times" << "\n";
    }

    return 0;
}