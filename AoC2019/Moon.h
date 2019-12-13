#ifndef MOON_H
#define MOON_H

#include <string>
#include <vector>

class Moon {
private:
    std::vector<int> pos;
    std::vector<int> vel;

public:
    Moon(int x, int y, int z);
    int GetEnergy();
    void Move();
    void Move(int dimension);
    void UpdateVel(Moon& otherMoon);
    void UpdateVel(Moon& otherMoon, int dimension);
};

#endif