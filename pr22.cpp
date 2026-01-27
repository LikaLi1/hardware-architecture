#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 5;
    int matrix[size][size];

    std::srand(std::time(nullptr));

    std::cout << "Массив 5x5:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = std::rand() % 10;
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            sum += matrix[i][j];
        }
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
