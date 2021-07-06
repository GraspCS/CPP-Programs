#include <iostream>

using namespace std;

/**
 * A program to reverse a number
 * @Author - GraspCS
 * Feel free to learn from the code
 * And to modify as per your needs
 */

int main() {
    // This will be the number to be reversed
    int n;
    cout << "Enter the number = ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a number greater than 1";
    } else {
        // In this variable we'll store the reversed number
        int r = 0;
        while (n > 0) {
            int t = n % 10;
            r = (r * 10) + t;
            n /= 10;
        }
        cout << "Reverse number = " << r;
    }

    return 0;
}