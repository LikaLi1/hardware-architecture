#include <iostream>
using namespace std;

int main() {
    const int STAGES = 5; 

    int stageI1 = 0; 
    int stageI2 = 0; 
    int stageI3 = 0; 

    const char* stageNames[STAGES] = { "IF", "ID", "EX", "MEM", "WB" };

    int cycle = 0;
    bool finished;

    while (true) {
        cycle++;
        cout << "Cycle " << cycle << ":\n";

        finished = true; 

        if (stageI1 >= 0 && stageI1 < STAGES) {
            cout << "  " << stageNames[stageI1] << ": I1 (X=A+B)\n";
            stageI1++;
            if (stageI1 >= STAGES) {
                stageI1 = -1;
            }
            finished = false;
        }

        if (stageI2 >= 0 && stageI2 < STAGES) {

            if (stageI2 == 2 && stageI1 != -1 && stageI1 < STAGES - 1) {

                cout << "  " << stageNames[stageI2] << ": I2 (waiting for I1)\n";
            }
            else {
                cout << "  " << stageNames[stageI2] << ": I2 (Y= X*2)\n";
                stageI2++;
                if (stageI2 >= STAGES) {
                    stageI2 = -1;
                }
                finished = false;
            }
        }

        if (stageI3 >= 0 && stageI3 < STAGES) {
            if (stageI3 == 2 && stageI2 != -1 && stageI2 < STAGES - 1) {
                cout << "  " << stageNames[stageI3] << ": I3 (waiting for I2)\n";
            }
            else {
                cout << "  " << stageNames[stageI3] << ": I3 (Z=Y-3)\n";
                stageI3++;
                if (stageI3 >= STAGES) {
                    stageI3 = -1;
                }
                finished = false;
            }
        }

        cout << "-----------------\n";

        if (stageI1 == -1 && stageI2 == -1 && stageI3 == -1) {
            break;
        }
    }

    return 0;
}
