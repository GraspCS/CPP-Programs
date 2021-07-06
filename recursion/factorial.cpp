#include <iostream>

using namespace std;

// Function to find factorial using recursion
int factorial (int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial (n - 1);
}

int main () {
    // The number for which factorial is to be found
    int n;
    cout << "Enter number = ";
    cin >> n;

    int f = factorial(n);
    cout << "Factorial = " << f;

    return 0;
}