#include <iostream>

using namespace std;

int counter = 0;

void printHello() {
    cout << "Hello" << "\n";
    ++counter;
    if(counter < 5) {
        printHello();
    }
}

int main () {
    printHello();
    return 0;
}