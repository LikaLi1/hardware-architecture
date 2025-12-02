#include <iostream>
using namespace std;

int main() {

    int I1_stage = 0; 
    int I2_stage = 0; 
    int I3_stage = 0; 

    const int PIPELINE_STAGES = 5;
    int cycle = 0;
    bool done = false;

    while (!done) {
        cycle++;
        done = true;
        cout << "Cycle " << cycle << ":\n";

        if (I1_stage < PIPELINE_STAGES) {
            done = false;
            cout << "  Stage " << I1_stage << ": I1 (A=B+C)\n";
            I1_stage++;
        }

        if (I2_stage < PIPELINE_STAGES) {
            done = false;

            if (I1_stage >= 2) {
                cout << "  Stage " << I2_stage << ": I2 (waiting for I1)\n";
                I2_stage++;
            }
            else {
                cout << "  Stage " << I2_stage << ": I2 (D=A+E)\n";
            }
        }

        if (I3_stage < PIPELINE_STAGES) {
            done = false;

            if (I2_stage >= 2) {
                cout << "  Stage " << I3_stage << ": I3 (waiting for I2)\n";
                I3_stage++;
            }
            else {
                cout << "  Stage " << I3_stage << ": I3 (F=D-B)\n";
            }
        }

        cout << "-----------------\n";
    }

    return 0;
}
