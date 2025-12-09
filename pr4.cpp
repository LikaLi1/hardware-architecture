#include <iostream>

int main() {
    const char trace[] = {'T', 'N', 'T', 'T', 'N', 'N', 'T', 'N', 'T'};
    int actuals[] = {1, 0, 1, 1, 0, 0, 1, 0, 1};
    int n = sizeof(actuals) / sizeof(actuals[0]);

    int state = 1;
    int correct = 0;
    int incorrect = 0;

    for (int i = 0; i < n; ++i) {
        int predicted = state;
        int actual = actuals[i];

        std::cout << "Access " << i+1 << ": predicted = "
                  << (predicted == 1 ? "T" : "N")
                  << ", actual = " << (actual == 1 ? "T" : "N");

        if (predicted == actual) {
            std::cout << "  -> OK\n";
            correct++;
        } else {
            std::cout << "  -> MISS\n";
            incorrect++;
            state = 1 - state;
        }
    }

    std::cout << "\nCorrect = " << correct << "\n";
    std::cout << "Incorrect = " << incorrect << "\n";

    return 0;
}
