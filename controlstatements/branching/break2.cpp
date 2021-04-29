#include <iostream>

using namespace std;

int main() {

    int option = 0;

    // here we have a more meaningful example to understand
    do {
        cout << "Enter 10 for Clothes" << "\n";
        cout << "Enter 20 for Groceries" << "\n";
        cout << "Enter 30 for Vegetables" << "\n";
        cout << "Enter 0 for Exit" << "\n\n";

        cout << "Enter option = ";
        cin >> option;

        if(option == 10) {
            cout << "\nYou chose clothes" << "\n\n";
        } else if (option == 20) {
            cout << "\nYou chose groceries" << "\n\n";
        } else if (option == 30) {
            cout << "\nYou chose vegetables" << "\n\n";
        } else if (option != 0) {
            cout << "\nInvalid option";
            break;
        }
    } while (option != 0);

    return 0;
}