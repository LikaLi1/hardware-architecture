#include <iostream>
#include <chrono>
#include <thread>

const size_t N = 8000000;

void partial_sum(int* arr, size_t start, size_t end, long long& result) {
    long long sum = 0;
    for (size_t i = start; i < end; ++i) {
        sum += arr[i];
    }
    result = sum;
}

int main() {
    int* arr = new int[N];

    for (size_t i = 0; i < N; ++i) {
        arr[i] = static_cast<int>(i);
    }

    long long result1 = 0;
    long long result2 = 0;

    std::thread t1(partial_sum, arr, 0, N / 2, std::ref(result1));
    std::thread t2(partial_sum, arr, N / 2, N, std::ref(result2));

    auto start_time = std::chrono::high_resolution_clock::now();

    t1.join();
    t2.join();

    long long total_sum = result1 + result2;

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << "Two-thread sum = " << total_sum << std::endl;
    std::cout << "Time = " << elapsed.count() << " sec" << std::endl;

    return 0;
}
