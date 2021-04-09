#include <iostream>

using namespace std;

int main () {
    int menu = 1;

    // this should be a fun program to understand a while loop
    while(menu != 0) {
        if(menu == 1) {
            cout << "I am dancing" << "\n";
        } else if (menu == 2) {
            cout << "I am singing" << "\n";
        } else {
            cout << "I do not know what I am doing" << "\n";
        }

        cout << "\n" << "0 for exit" << "\n";
        cout << "1 for dancing" << "\n";
        cout << "2 for singing" << "\n";

        cout << "\n" << "Enter your input :: ";
        cin >> menu;
        cout << "\n";
    }

    cout << "End";

    return 0;
}