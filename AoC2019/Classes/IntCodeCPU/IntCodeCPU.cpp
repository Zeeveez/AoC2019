#include "IntCodeCPU.h"

IntCodeCPU::IntCodeCPU(std::vector<long long> program) {
    memory = program;
    halted = false;
    awaitingInput = true;
    outputReady = false;
    ip = 0;
    relativeBase = 0;
}

void IntCodeCPU::Tick() {
    if (!halted) {
        long long opcode = memory[ip] % 100;
        long long addressMode1 = memory[ip] / 100 % 10;
        long long addressMode2 = memory[ip] / 1000 % 10;
        long long addressMode3 = memory[ip] / 10000 % 10;
        long long paramValue1;
        long long paramValue2;
        long long outputAddress;


        switch (opcode) {
        case 1: // ADD
            paramValue1 = LoadParam(addressMode1, 1);
            paramValue2 = LoadParam(addressMode2, 2);
            outputAddress = addressMode3 == 0 ? memory[ip + 3] : relativeBase + memory[ip + 3];
            MemoryWrite(outputAddress, paramValue1 + paramValue2);
            ip += 4;
            break;
        case 2: // MUL
            paramValue1 = LoadParam(addressMode1, 1);
            paramValue2 = LoadParam(addressMode2, 2);
            outputAddress = addressMode3 == 0 ? memory[ip + 3] : relativeBase + memory[ip + 3];
            MemoryWrite(outputAddress, paramValue1 * paramValue2);
            ip += 4;
            break;
        case 3: // IN
            outputAddress = addressMode1 == 0 ? memory[ip + 1] : relativeBase + memory[ip + 1];
            MemoryWrite(outputAddress, input);
            awaitingInput = true;
            ip += 2;
            break;
        case 4: // OUT
            paramValue1 = LoadParam(addressMode1, 1);
            output = paramValue1;
            outputReady = true;
            ip += 2;
            break;
        case 5: // JNZ
            paramValue1 = LoadParam(addressMode1, 1);
            paramValue2 = LoadParam(addressMode2, 2);
            ip = paramValue1 != 0 ? (unsigned int)paramValue2 : ip + 3;
            break;
        case 6: // JEZ
            paramValue1 = LoadParam(addressMode1, 1);
            paramValue2 = LoadParam(addressMode2, 2);
            ip = paramValue1 == 0 ? (unsigned int)paramValue2 : ip + 3;
            break;
        case 7: // LT
            paramValue1 = LoadParam(addressMode1, 1);
            paramValue2 = LoadParam(addressMode2, 2);
            outputAddress = addressMode3 == 0 ? memory[ip + 3] : relativeBase + memory[ip + 3];
            MemoryWrite(outputAddress, paramValue1 < paramValue2 ? 1 : 0);
            ip += 4;
            break;
        case 8: // EQ
            paramValue1 = LoadParam(addressMode1, 1);
            paramValue2 = LoadParam(addressMode2, 2);
            outputAddress = addressMode3 == 0 ? memory[ip + 3] : relativeBase + memory[ip + 3];
            MemoryWrite(outputAddress, paramValue1 == paramValue2 ? 1 : 0);
            ip += 4;
            break;
        case 9: // MRB
            paramValue1 = LoadParam(addressMode1, 1);
            relativeBase += paramValue1;
            ip += 2;
            break;
        case 99:
            halted = true;
            break;
        }
    }
}

long long IntCodeCPU::LoadParam(long long addressMode, long long paramNumber) {
    return addressMode == 0 ? MemoryRead(MemoryRead(ip + paramNumber))
        : addressMode == 1 ? MemoryRead(ip + paramNumber)
        : MemoryRead(relativeBase + MemoryRead(ip + paramNumber));
}

long long IntCodeCPU::MemoryRead(long long address) {
    if (address < memory.size()) {
        return memory[(unsigned int)address];
    }
    return 0;
}

void IntCodeCPU::MemoryWrite(long long address, long long value) {
    while (memory.size() < address + 1) {
        memory.push_back(0);
    }
    memory[(unsigned int)address] = value;
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

void IntCodeCPU::RunToIO() {
    while (!awaitingInput && !outputReady && !halted) { Tick(); }
}

void IntCodeCPU::Input(long long input) {
    this->input = input;
    awaitingInput = false;
}

long long IntCodeCPU::Output() {
    outputReady = false;
    return output;
}