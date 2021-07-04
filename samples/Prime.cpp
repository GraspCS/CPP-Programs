#include <iostream>

using namespace std;

/**
 * A program to find if a number is Prime Number
 * @Author - GraspCS
 * Feel free to learn from the code
 * And to modify as per your needs
 */

int main() {
    // This will be the number to be checked
    int n;

    cout << "Enter the Number = ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a number greater than 1";
    } else if (n == 1) {
        cout << "1 is Non Prime Number";
    } else {
        bool isPrime = true;

        for (int i = 2; i < n; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << n << " is a Prime Number";
        } else {
            cout << n << " is NOT a Prime Number";
        }
    }
    return 0;
}