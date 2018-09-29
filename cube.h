#ifndef CUBE_H
#define CUBE_H

#include"object.h"

class cube: public object
{
private:
    double length;
public:
    cube();
    cube(double len);
    cube(double len, Vector& pos);
    cube(double len, Angle& rot);
    cube(double len, Vector &pos, Angle& rot);
    cube(cube& lc);
    ~cube();

    int setlength(double length);
    double getlength();
    int draw() override;
};

#endif // CUBE_H
