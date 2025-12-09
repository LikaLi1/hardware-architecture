#include <iostream>

int main() {
    const int rows = 5;
    const int cols = 3;
    int arr[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = 1 + rand() % 100; 
            
        }
    }

    for (int i = 0; i < rows; ++i) {
        int sum = 0;
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "  ";
            sum += arr[i][j];
        }
        std::cout << std::endl;
        double average = static_cast<double>(sum) / cols;
        std::cout << "Arithmetic mean: " << i + 1 << ": " << average << "   " << std::endl;
    }

    return 0;
}
