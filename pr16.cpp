#include <iostream>

int main() {
    int M, N;

    std::cout << "Enter number of rows: ";
    std::cin >> M;

    std::cout << "Enter number of columns: ";
    std::cin >> N;

    int arr[M][N];

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            arr[i][j] = 1 + (i + j) % 100;
        }
    }

    int max_sum = -2147483648;
    int max_row_index = 0;

    for (int i = 0; i < M; ++i) {
        int row_sum = 0;
        for (int j = 0; j < N; ++j) {
            row_sum += arr[i][j];
        }

        if (row_sum > max_sum) {
            max_sum = row_sum;
            max_row_index = i;
        }
    }

    std::cout << "Sum max: " << (max_row_index + 1) << "\n";
    std::cout << "Sum: " << max_sum << std::endl;

    return 0;
}
