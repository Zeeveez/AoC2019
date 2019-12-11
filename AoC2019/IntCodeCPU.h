    #ifndef INTCODECPU_H
#define INTCODECPU_H

#include <vector>

class IntCodeCPU {
private:
    long long input;
    long long output;
    long long relativeBase;

public:
    std::vector<long long> memory;
    bool halted;
    long long ip;
    bool awaitingInput;
    bool outputReady;

    IntCodeCPU(std::vector<long long> program);
    void Tick();
    long long MemoryRead(long long address);
    void MemoryWrite(long long address, long long value);
    long long LoadParam(int addressMode, int paramNumber);
    void RunToEnd();
    void RunToInput();
    void RunToOutput();
    void Input(long long input);
    long long Output();
};
#endif