#include <iostream>

using namespace std;

void printHello() {
    cout << "Hello" << "\n";
    printHello();
}

int main () {
    printHello();
    return 0;
}