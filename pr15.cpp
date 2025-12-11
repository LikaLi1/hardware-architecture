#include <iostream>

int main() {
    const int size = 5;
    int arr[size][size];
    
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            arr[i][j] = 1 + rand() % 100;
        }
    }
    
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            sum += arr[i][j];
        }
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
