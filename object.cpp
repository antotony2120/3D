#include "object.h"

object::object()
{}

object::object(Vector& position, Angle& rotation){
    this->position = new Vector(position);
    this->rotation = new Angle(rotation);
}

object::object(object& cob){
    this->position = new Vector(cob.getposition());
    this->rotation = new Angle(cob.getrotation());
}

object::~object(){
    delete this->position;
    delete this->rotation;
}

int object::setposition(Vector& position){
    *this->position = position;
    return 1;
}

int object::setrotation(Angle& rotation){
    *this->rotation = rotation;
    return 1;
}

Vector& object::getposition(){
    return *this->position;
}

Angle& object::getrotation(){
    return *this->rotation;
}
