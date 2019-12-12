#ifndef MOON_H
#define MOON_H

#include <string>

class Moon {
private:
    int x;
    int y;
    int z;
    int xVel;
    int yVel;
    int zVel;

public:
    Moon(int x, int y, int z);
    int GetEnergy();
    std::string GetPosition();
    void Move();
    void UpdateVel(Moon& otherMoon);
};

#endif