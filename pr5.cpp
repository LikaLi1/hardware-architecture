#include <iostream>

int main() {
    const char trace[] = {'T', 'N', 'T', 'T', 'N', 'N', 'T', 'N', 'T'};
    int branch[] = {1, 0, 1, 1, 0, 0, 1, 0, 1};
    int n = sizeof(branch) / sizeof(branch[0]);
    int correct = 0;
    int incorrect = 0;

    for (int i = 0; i < n; ++i) 
    {
        int actual = branch[i];
        int predicted = 1;

        std::cout << "Access " << i+1 << ": predicted = "
                  << (predicted == 1 ? "T" : "N")
                  << ", actual = " << (actual == 1 ? "T" : "N");

        if (predicted == actual) 
        {
            std::cout << "  -> OK\n";
            correct++;
        } else {
            std::cout << "  -> MISS\n";
            incorrect++;
        }
    }

    std::cout << "\nCorrect = " << correct << "\n";
    std::cout << "Incorrect = " << incorrect << "\n";

    return 0;
}
