#include "IntCodeCPU.h"

IntCodeCPU::IntCodeCPU(std::vector<int> program) {
    memory = program;
    halted = false;
    awaitingInput = true;
    outputReady = false;
    ip = 0;
}

void IntCodeCPU::Tick() {
    if (!halted) {
        int opcode = memory[ip] % 100;
        int addressMode1 = memory[ip] / 100 % 10;
        int addressMode2 = memory[ip] / 1000 % 10;
        int paramValue1;
        int paramValue2;


        switch (opcode) {
        case 1: // ADD
            paramValue1 = addressMode1 == 0 ? memory[memory[ip + 1]] : memory[ip + 1];
            paramValue2 = addressMode2 == 0 ? memory[memory[ip + 2]] : memory[ip + 2];
            memory[memory[ip + 3]] = paramValue1 + paramValue2;
            ip += 4;
            break;
        case 2: // MUL
            paramValue1 = addressMode1 == 0 ? memory[memory[ip + 1]] : memory[ip + 1];
            paramValue2 = addressMode2 == 0 ? memory[memory[ip + 2]] : memory[ip + 2];
            memory[memory[ip + 3]] = paramValue1 * paramValue2;
            ip += 4;
            break;
        case 3: // IN
            memory[memory[ip + 1]] = input;
            awaitingInput = true;
            ip += 2;
            break;
        case 4: // OUT
            paramValue1 = addressMode1 == 0 ? memory[memory[ip + 1]] : memory[ip + 1];
            output = paramValue1;
            outputReady = true;
            ip += 2;
            break;
        case 5: // JNZ
            paramValue1 = addressMode1 == 0 ? memory[memory[ip + 1]] : memory[ip + 1];
            paramValue2 = addressMode2 == 0 ? memory[memory[ip + 2]] : memory[ip + 2];
            if (paramValue1 != 0) {
                ip = paramValue2;
            }
            else {
                ip += 3;
            }
            break;
        case 6: // JEZ
            paramValue1 = addressMode1 == 0 ? memory[memory[ip + 1]] : memory[ip + 1];
            paramValue2 = addressMode2 == 0 ? memory[memory[ip + 2]] : memory[ip + 2];
            if (paramValue1 == 0) {
                ip = paramValue2;
            }
            else {
                ip += 3;
            }
            break;
        case 7: // LT
            paramValue1 = addressMode1 == 0 ? memory[memory[ip + 1]] : memory[ip + 1];
            paramValue2 = addressMode2 == 0 ? memory[memory[ip + 2]] : memory[ip + 2];
            memory[memory[ip + 3]] = paramValue1 < paramValue2 ? 1 : 0;
            ip += 4;
            break;
        case 8: // EQ
            paramValue1 = addressMode1 == 0 ? memory[memory[ip + 1]] : memory[ip + 1];
            paramValue2 = addressMode2 == 0 ? memory[memory[ip + 2]] : memory[ip + 2];
            memory[memory[ip + 3]] = paramValue1 == paramValue2 ? 1 : 0;
            ip += 4;
            break;

        case 99:
            halted = true;
            break;
        }
    }
}

void IntCodeCPU::RunToEnd() {
    while (!halted) { Tick(); }
}

void IntCodeCPU::RunToInput() {
    while (!awaitingInput && !halted) { Tick(); }
}

void IntCodeCPU::RunToOutput() {
    while (!outputReady && !halted) { Tick(); }
}

void IntCodeCPU::Input(int input) {
    this->input = input;
    awaitingInput = false;
}

int IntCodeCPU::Output() {
    outputReady = false;
    return output;
}