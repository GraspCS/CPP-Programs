#include <iostream>

using namespace std;

int main() {

    // here we want the loop to break when the value of i is 5
    for (int i = 1; i <= 10; ++i) {
        if(i == 5) {
            break;
        }

        cout << "i = " << i << "\n";
    }

    return 0;
}