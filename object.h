#ifndef OBJECT_H
#define OBJECT_H

#include"vector.h"
#include"angle.h"

class object
{
protected:
    Vector* position;
    Angle* rotation;
public:
    object();
    object(Vector& position, Angle& rotation);
    object(object& cob);
    ~object();

    int setposition(Vector& position);
    int setrotation(Angle& rotation);
    Vector& getposition();
    Angle& getrotation();
    virtual int draw(){return 0;}
};

#endif // OBJECT_H
