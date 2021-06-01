#include <iostream>

using namespace std;

int main() {
    // The last element is 0 to stop the loop
    int arr[] = {1, 2, 3, 4, 5, 0};

    for (int *p = arr; *p; ++p) {
        cout << *p << "\n";
    }

    return 0;
}