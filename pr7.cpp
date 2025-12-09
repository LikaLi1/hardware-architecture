#include <iostream>
#include <chrono>

const size_t ARRAY_SIZE = 8000000;

int main() {
    int* arr = new int[ARRAY_SIZE];

    for (size_t i = 0; i < ARRAY_SIZE; ++i) {
        arr[i] = static_cast<int>(i);
    }

    auto start_time = std::chrono::high_resolution_clock::now();

    long long total_sum = 0;
    for (size_t i = 0; i < ARRAY_SIZE; ++i) {
        total_sum += arr[i];
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << "Single-thread sum = " << total_sum << std::endl;
    std::cout << "Time = " << elapsed.count() << " sec" << std::endl;

    return 0;
}
