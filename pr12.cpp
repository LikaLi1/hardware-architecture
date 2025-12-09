#include <iostream>

int main() {
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++) {
        std::cout << arr[i][i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
