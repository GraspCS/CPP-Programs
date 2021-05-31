#include <iostream>

using namespace std;

int main() {
    int rollNumbers[10];

    int size = sizeof(rollNumbers) / sizeof(rollNumbers[0]);
    cout << "Size = " << size << "\n";

    for (int i = 0; i < 10; ++i) {
        cout << "Enter roll number " << i + 1 << " :: ";
        cin >> rollNumbers[i];
    }

    cout << "Entered values are \n";

    for (int i = 0; i < 10; ++i) {
        cout << rollNumbers[i] << "\n";
    }

    return 0;
}