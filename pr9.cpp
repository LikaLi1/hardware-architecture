#include <iostream>

int main() {
    const int rows = 4;
    const int cols = 4;
    int arr[rows][cols];
    int sum = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = 1 + rand() % 100; 
            sum += arr[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << "\n";
    }
    
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
