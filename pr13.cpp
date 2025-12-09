#include <iostream>

int main() {
    const int rows = 4;
    const int cols = 4;
    int arr[rows][cols] = {
        {2, 4, 6, 33},
        {8, 10, 12, 72},
        {14, 16, 18, 6},
        {1,  2,  3,  4}  
    };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 4; i++) {
        std::cout << arr[i][3 - i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
