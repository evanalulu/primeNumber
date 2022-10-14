#include <iostream>

int main() {
    bool isPrime = true;
    for (int i = 1; i < 20; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            std::cout << i << " is a prime number \n";
        }
        isPrime = true;
    }
}
