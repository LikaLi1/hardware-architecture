#include <iostream>

int main() {
    const char* instructions[] = {"I1", "I2", "I3"};
    const int num_instructions = 3;
  
    const char* stage_IF = instructions[0];
    const char* stage_EX = ".";
    const char* stage_WB = ".";

    int next_instruction_index = 1;
    int cycle = 1;

    while (true) {
        std::cout << "Cycle " << cycle << ": "
                  << "IF=" << stage_IF << ", "
                  << "EX=" << stage_EX << ", "
                  << "WB=" << stage_WB << std::endl;

        static bool all_done = false;
        bool instructions_left = (next_instruction_index < num_instructions);
        if (!instructions_left && stage_IF[0] == '.' && stage_EX[0] == '.' && stage_WB[0] == '.') {
            break; 
        }

        const char* temp_WB = stage_WB;
        const char* temp_EX = stage_EX;
        const char* temp_IF = stage_IF;

        stage_WB = temp_EX;

        stage_EX = temp_IF;

        if (next_instruction_index < num_instructions) {
            stage_IF = instructions[next_instruction_index];
            next_instruction_index++;
        } else {
            stage_IF = ".";
        }

        cycle++;
    }

    return 0;
}
