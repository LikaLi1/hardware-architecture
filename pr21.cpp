#include <iostream>

int main() {
    char actuals[] = {'T', 'N', 'T', 'T', 'N'};
    int length = sizeof(actuals) / sizeof(actuals[0]);

    bool predictor = true;

    int correct = 0;
    int incorrect = 0;

    for (int i = 0; i < length; ++i) {
        char actual = actuals[i];
        bool prediction = predictor;

        bool realOutcome = (actual == 'T');

        if (prediction == realOutcome) {
            correct++;
        } else {
            incorrect++;
            predictor = !predictor;
        }
    }

    std::cout << "Correct: " << correct << std::endl;
    std::cout << "Incorrect: " << incorrect << std::endl;

    return 0;
}
