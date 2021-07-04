#include <iostream>

using namespace std;

/**
 * A command line based calculator for int variables
 * @Author - GraspCS
 * Feel free to learn from the code
 * And to modify as per your needs
 */

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int multiply(int a, int b) { return a * b; }

int divide(int a, int b) { return a / b; }

int main() {
    cout << "\n\t\t"
         << "Welcome To My Calculator"
         << "\n\n";

    int num1, num2;
    char operation;

    do {
        cout << "Enter first number = ";
        cin >> num1;

        cout << "Enter second number = ";
        cin >> num2;

        cout << "\n\t\t"
             << "Choose your operation"
             << "\n\n";
        cout << "-> Enter + for addition"
             << "\n";
        cout << "-> Enter - for subtraction"
             << "\n";
        cout << "-> Enter * for multiplication"
             << "\n";
        cout << "-> Enter / for division"
             << "\n";
        cout << "-> Enter q to Quit"
             << "\n\n";

        cout << "Enter your operation = ";
        cin >> operation;

        switch (operation) {
            case '+':
                cout << "\n"
                     << num1 << " + " << num2 << " = " << add(num1, num2)
                     << "\n\n";
                break;
            case '-':
                cout << "\n"
                     << num1 << " - " << num2 << " = " << subtract(num1, num2)
                     << "\n\n";
                break;
            case '*':
                cout << "\n"
                     << num1 << " * " << num2 << " = " << multiply(num1, num2)
                     << "\n\n";
                break;
            case '/':
                cout << "\n"
                     << num1 << " / " << num2 << " = " << divide(num1, num2)
                     << "\n\n";
                break;
            case 'q':
            case 'Q':
                break;
            default:
                cout << "\n\n"
                     << "Wrong input, try again!"
                     << "\n\n";
        }
    } while (operation != 'q');

    cout << "\n\n\t" << "Thank you for using My Calculator" << "\n\n";
}