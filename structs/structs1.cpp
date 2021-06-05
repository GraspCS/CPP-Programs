#include <iostream>

using namespace std;

// our structure
struct Person {
    string firstName, lastName;
    int age;

    void print() {
        cout << firstName << " " << lastName << " is " << age << " years old." << "\n";
    }
};

int main() {
    // Create a variable of type Person
    Person p1;
    p1.firstName = "James";
    p1.lastName = "Bond";
    p1.age = 36;

    // Create another variable of type Person
    Person p2;
    p2.firstName = "Ethan";
    p2.lastName = "Hunt";
    p2.age = 34;

    p1.print();
    p2.print();

    return 0;
}