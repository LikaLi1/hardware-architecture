#include <iostream>

int main() {
    int M, N;

    std::cout << "Enter rows: ";
    std::cin >> M;

    std::cout << "Enter columns: ";
    std::cin >> N;

    int arr[M][N];

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            arr[i][j] = 1 + rand() % 100;  
        }
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    for (int j = 0; j < N; ++j) {
        int max_val = arr[0][j];
        for (int i = 1; i < M; ++i) {
            if (arr[i][j] > max_val) {
                max_val = arr[i][j];
            }
        }
        std::cout << "Max " << j + 1 << ": " << max_val << std::endl;
    }

    return 0;
}
