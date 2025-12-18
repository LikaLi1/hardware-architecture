#include <iostream>
#include <thread>

const int size = 1000000;

int main() {
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = 1;
    }

    long long total_sum_single = 0;
    for (int i = 0; i < size; ++i) {
        total_sum_single += arr[i];
    }

    long long sum_part1 = 0, sum_part2 = 0;
    int mid = size / 2;

    auto sum_slice = [&](int start, int end, long long &result) {
        result = 0;
        for (int i = start; i < end; ++i) {
            result += arr[i];
        }
    };

    std::thread t1(sum_slice, 0, mid, std::ref(sum_part1));
    std::thread t2(sum_slice, mid, size, std::ref(sum_part2));

    t1.join();
    t2.join();

    long long total_sum_two_threads = sum_part1 + sum_part2;

    std::cout << "Total sum single: " << total_sum_single << std::endl;
    std::cout << "Total sum two threads: " << total_sum_two_threads << std::endl;
  
    return 0;
}
