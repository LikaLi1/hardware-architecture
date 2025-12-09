#include <iostream>

int main() {
    const int rows = 3;
    const int cols = 4;
    int arr[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = 1 + rand() % 100; 
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << "\n";
    }

    return 0;
}
