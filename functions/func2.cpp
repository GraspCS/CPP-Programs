#include <iostream>

using namespace std;

int sum(int a, int b) {
    int s = a + b;
    return s;
}

int main() {
    int sum1 = sum(10, 20);
    int sum2 = sum(30, 40);

    cout << "Sum 1 = " << sum1 << "\n";
    cout << "Sum 2 = " << sum2;
}