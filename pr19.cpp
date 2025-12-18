#include <iostream>

int main() {
    const int cacheSize = 2;
    int cache[cacheSize];
    bool valid[cacheSize] = {false, false};
    int head = 0;
    int hits = 0, misses = 0;

    int requests[] = {1, 2, 1, 3, 2, 1};
    int n = sizeof(requests) / sizeof(requests[0]);

    for (int i = 0; i < n; ++i) {
        int request = requests[i];
        bool hit = false;

        for (int j = 0; j < cacheSize; ++j) {
            if (valid[j] && cache[j] == request) {
                hit = true;
                break;
            }
        }

        if (hit) {
            std::cout << "HIT" << std::endl;
            hits++;
        } else {
            std::cout << "MISS" << std::endl;
            misses++;
            cache[head] = request;
            valid[head] = true;
            head = (head + 1) % cacheSize;
        }
    }

    std::cout << "Hits: " << hits << std::endl;
    std::cout << "Misses: " << misses << std::endl;

    return 0;
}
