#include <cmath>
#include "Ship.h"
#include <iostream>
using namespace std;

Ship::Ship(double x, double y, double z) : Entity(x, y, z) {
    this->life = 100;
}

Ship::~Ship() {
    // destructor
}