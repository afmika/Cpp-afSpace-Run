#ifndef ENTITY_H
#define ENTITY_H

class Entity {
    public:
        double x, y, z;
        Entity(double x, double y, double z);
        
        void setX(double x);
        void setY(double y);
        void setZ(double z);

        double distSquared(Entity &other) const;
        double dist(Entity &other) const;
        double getX() const;
        double getY() const;
        double getZ() const;

        virtual ~Entity();
};

#endif