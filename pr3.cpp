#include <iostream>

using namespace std;

int main() {
    const int dataSize = 12;
    int data[dataSize] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    const int Count = 12;
    int accesses[Count] = {0, 1, 2, 0, 3, 1, 4, 2, 5, 0, 6, 1};

    const int size = 3;
    int cache[size]; 
    for (int i = 0; i < size; i++) 
    {
        cache[i] = -1;
    }

    int cache_hits = 0;
    int cache_misses = 0;
    int fifo_pointer = 0; 

    for (int i = 0; i < Count; i++) 
    {
        int address = accesses[i];
        bool hit = false;

        for (int j = 0; j < size; j++) 
        {
            if (cache[j] == address)
            {
                hit = true;
                break;
            }
        }

        if (hit) 
        {
            cout << "Access " << address << " -> HIT\n";
            cache_hits++;
        }
        else {
            cout << "Access " << address << " -> MISS\n";
            cache_misses++;
            cache[fifo_pointer] = address;
            fifo_pointer = (fifo_pointer + 1) % size;
        }
    }

    cout << "Total cache hits: " << cache_hits << endl;
    cout << "Total cache misses: " << cache_misses << endl;

    return 0;
}
