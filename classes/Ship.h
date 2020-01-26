#ifndef SHIP_H
#define SHIP_H
#include "Entity.h"

class Ship : public Entity {
    public:
        double life;
        Ship(double x, double y, double z);

        virtual ~Ship();
};

#endif