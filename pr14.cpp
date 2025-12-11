#include <iostream>

int main() {
    const int rows = 5;
    const int cols = 5;
    int arr[rows][cols] = {
        {10, -3, 0, 5, -1},
        {-7, 8, -2, 0, 4},
        {3, -4, 7, -6, 2},
        {0, 1, -8, 9, -10},
        {11, -12, 13, -14, 15}
    };

    int neg_count = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] < 0) {
                ++neg_count;
            }
        }
    }

    std::cout << "Negative elements: " << neg_count << std::endl;

    return 0;
}
