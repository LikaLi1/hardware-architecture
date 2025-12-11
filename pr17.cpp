#include <iostream>

int main() {
    int N, M;

    std::cout << "Enter number of rows (N): ";
    std::cin >> N;

    std::cout << "Enter number of columns (M): ";
    std::cin >> M;

    int matrix[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            matrix[i][j] = 1 + (i + j) % 100;
        }
    }

    int min_val = matrix[0][0];
    int max_val = matrix[0][0];
    int min_i = 0, min_j = 0;
    int max_i = 0, max_j = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (matrix[i][j] < min_val) {
                min_val = matrix[i][j];
                min_i = i;
                min_j = j;
            }
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    std::swap(matrix[min_i][min_j], matrix[max_i][max_j]);

    std::cout << "Matrix:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
