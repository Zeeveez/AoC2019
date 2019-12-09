#ifndef INTCODECPU_H
#define INTCODECPU_H

#include <vector>

class IntCodeCPU {
private:
    int input;
    int output;

public:
    std::vector<int> memory;
    bool halted;
    int ip;
    bool awaitingInput;
    bool outputReady;

    IntCodeCPU(std::vector<int> program);
    void Tick();
    void RunToEnd();
    void RunToInput();
    void RunToOutput();
    void Input(int input);
    int Output();
};
#endif