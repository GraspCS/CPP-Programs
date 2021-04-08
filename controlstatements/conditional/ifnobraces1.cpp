#include <iostream>

int main() {
    std::cout << "begin" << "\n";

    int x = 49;

    // let us write our logic below as per the requirement
    if(x >= 100)
        std::cout << "Oh my God!" << "\n";
    else if (x >= 50)
        std::cout << "Oh dear Lord!" << "\n";
    else if (x >= 20)
        std::cout << "Oh my Goodness!" << "\n";
    else
        std::cout << "Oh Goodness!" << "\n";

    std::cout << "end" << "\n";
    return 0;
}