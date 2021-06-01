#include <iostream>

using namespace std;

int main() {
    // An int type variable with value 25
    int x = 25;

    // A pointer variable that can store address of int type variable
    int *p;

    // In p we store the address of x
    p = &x;

    cout << "Address of x = " << p << "\n";
    cout << "Value at address stored = " << *p << "\n";

    return 0;
}