#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            // Print spaces to align the pattern
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            // Print asterisks to form the inverted triangle
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}