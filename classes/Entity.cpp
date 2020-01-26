#include <cmath>
#include "Entity.h"
#include <iostream>
using namespace std;

Entity::Entity(double x, double y, double z) {
    this->setX(x);
    this->setY(y);
    this->setZ(z);
}

void Entity::setX(double x) {
    this->x = x;
}
void Entity::setY(double y) {
    this->y = y;
}
void Entity::setZ(double z) {
    this->z = z;
}
double Entity::distSquared(Entity &other) const {
    return pow(this->getX() - other.getX(), 2) + pow(this->getX() - other.getX(), 2);
}
double Entity::dist(Entity &other) const {
    return sqrt( this->distSquared(other) );
}
double Entity::getX() const {
    return this->x;
}
double Entity::getY() const {
    return this->y;
}
double Entity::getZ() const {
    return this->z;
}

Entity::~Entity() {
    // destructor
}