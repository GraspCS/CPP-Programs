#include <iostream>

using namespace std;

/**
 * A program to print Fibonacci Sequence
 * @Author - GraspCS
 * Feel free to learn from the code
 * And to modify as per your needs
 */

int main () {
    // Initial numbers
    int a = 0, b = 1;

    // Max Length
    int max;
    cout << "Enter max = ";
    cin >> max;

    cout << a << " ";
    while (b < max) {
        cout << b << " ";
        int c = b;
        b = a + b;
        a = c;
    }
}