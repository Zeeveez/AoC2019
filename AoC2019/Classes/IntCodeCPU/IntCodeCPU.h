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
    unsigned int ip;
    bool awaitingInput;
    bool outputReady;

    IntCodeCPU(std::vector<long long> program);
    void Tick();
    long long MemoryRead(long long address);
    void MemoryWrite(long long address, long long value);
    long long LoadParam(long long addressMode, long long paramNumber);
    void RunToEnd();
    void RunToInput();
    void RunToOutput();
    void RunToIO();
    void Input(long long input);
    long long Output();
};
#endif