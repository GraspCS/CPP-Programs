#include <iostream>

int main() {

    // here we have counter variable that tells how many times loop executed
    for(int i = 4, counter = 1; i; --i, ++counter) {
        std::cout << "Loop working " << counter << " times" << "\n";
    }

    return 0;
}