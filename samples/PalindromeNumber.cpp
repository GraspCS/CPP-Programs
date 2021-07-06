#include <iostream>

using namespace std;

/**
 * A program to check if a number is palindrome or not
 * @Author - GraspCS
 * Feel free to learn from the code
 * And to modify as per your needs
 */

// This function will reverse the given number and return it
int reverse(int n) {
    int r = 0;
    while (n > 0) {
        int t = n % 10;
        r = (r * 10) + t;
        n /= 10;
    }
    return r;
}

int main () {
    
    // This will be our number to be checked
    int n;
    cout << "Please enter the number = ";
    cin >> n;

    // This will store the reversed number
    int revN = reverse(n);

    // Check if the reversed number is same as original number
    if(n == revN) {
        cout << "The number is a Palindrome number";
    } else {
        cout << "The number is NOT Palindrome number";
    }

    return 0;
}