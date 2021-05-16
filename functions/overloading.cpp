#include <iostream>

using namespace std;

int sum(int a, int b) {
    int s = a + b;
    return s;
}

float sum(float a, float b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int sum1 = sum(50, 50);
    float sum2 = sum(40.5f, 80.4f);
    float sum3 = sum(100, 200, 300);

    cout << "Sum 1 = " << sum1 << "\n";
    cout << "Sum 2 = " << sum2 << "\n";
    cout << "Sum 3 = " << sum3;
}