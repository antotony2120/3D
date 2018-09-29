#include "cube.h"

cube::cube()
{
    this->position = new Vector();
    this->rotation = new Angle();
    this->length = 0;
}

cube::cube(double len)
{
    this->position = new Vector();
    this->rotation = new Angle();
    this->length = len;
}

cube::cube(double len, Vector& pos)
{
    this->position = new Vector(pos);
    this->rotation = new Angle();
    this->length = len;
}

cube::cube(double len, Angle& rot)
{
    this->position = new Vector();
    this->rotation = new Angle(rot);
    this->length = len;
}

cube::cube(double len, Vector &pos, Angle& rot)
{
    this->position = new Vector(pos);
    this->rotation = new Angle(rot);
    this->length = len;
}

cube::cube(cube& lc)
{
    this->position = new Vector(lc.getposition());
    this->rotation = new Angle(lc.getrotation());
    this->length = lc.getlength();
}

cube::~cube(){
    this->length = 0;
    delete this->position;
    delete this->rotation;
}

int cube::setlength(double length){
    this->length = length;
    return 1;
}

double cube::getlength(){
    return this->length;
}

int cube::draw(){
    if (this->position == nullptr)
        return 0;
    if (this->rotation == nullptr)
        return 0;
    return 1;
}
