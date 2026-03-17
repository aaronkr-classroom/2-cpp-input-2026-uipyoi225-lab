#include <iostream>
#include <string>

int main() {
    int product = 1;
    
    for (int i = 1; i < 10; ++i) {
        product *= i;
    }
    std::cout << "1부터 9까지의 곱: " << product << std::endl;
    return 0;
}