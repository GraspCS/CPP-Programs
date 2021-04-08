#include <iostream>

int main() {

    // here we have counter variable that tells how many times loop executed
    for(int i = 1, counter = 1; i < 5; ++i, ++counter) {
        std::cout << "Loop working " << counter << " times" << "\n";
    }

    return 0;
}