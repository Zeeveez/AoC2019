#include "Moon.h"

#include <cmath>
#include <sstream>

Moon::Moon(int x, int y, int z) :x(x), y(y), z(z), xVel(0), yVel(0), zVel(0) {}

int Moon::GetEnergy() {
    return (std::abs(x) + std::abs(y) + std::abs(z)) * (std::abs(xVel) + std::abs(yVel) + std::abs(zVel));
}

std::string Moon::GetPosition() {
    std::stringstream ss;
    ss << x << "," << y << "," << z << "," << xVel << "," << yVel << "," << zVel << ";";
    return ss.str();
}

void Moon::Move() {
    x += xVel;
    y += yVel;
    z += zVel;
}

void Moon::UpdateVel(Moon& otherMoon) {
    int dx = otherMoon.x - x;
    int dy = otherMoon.y - y;
    int dz = otherMoon.z - z;
    int xChange = dx > 0 ? 1 : dx < 0 ? -1 : 0;;
    int yChange = dy > 0 ? 1 : dy < 0 ? -1 : 0;;
    int zChange = dz > 0 ? 1 : dz < 0 ? -1 : 0;;
    xVel += xChange;
    yVel += yChange;
    zVel += zChange;
    otherMoon.xVel -= xChange;
    otherMoon.yVel -= yChange;
    otherMoon.zVel -= zChange;
}