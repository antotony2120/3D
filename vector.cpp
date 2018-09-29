#include "vector.h"

Vector::Vector()
{
    this->_x = new double(0);
    this->_y = new double(0);
    this->_z = new double(0);
}

Vector::Vector(const double& _x, const double& _y, const double& _z){
    this->_x = new double(_x);
    this->_y = new double(_y);
    this->_z = new double(_z);
}

Vector::Vector(Vector &cvec){
    this->_x = new double(cvec.x());
    this->_y = new double(cvec.y());
    this->_z = new double(cvec.z());
}

Vector::~Vector(){
    delete this->_x;
    delete this->_y;
    delete this->_z;
}

double Vector::x(){
    return *this->_x;
}

double Vector::y(){
    return *this->_y;
}

double Vector::z(){
    return *this->_z;
}

Vector& Vector::operator =(Vector& nvec){
    delete this->_x;
    delete this->_y;
    delete this->_z;
    this->_x = new double(nvec.x());
    this->_y = new double(nvec.y());
    this->_z = new double(nvec.z());
    return *this;
}

Vector& Vector::operator +(Vector& plvec){
    *this->_x += plvec.x();
    *this->_y += plvec.y();
    *this->_z += plvec.z();
    return *this;
}

Vector& Vector::operator -(Vector& ervec){
    *this->_x -= ervec.x();
    *this->_y -= ervec.y();
    *this->_z -= ervec.z();
    return *this;
}

Vector& Vector::operator *(double &coef){
    *this->_x *= coef;
    *this->_y *= coef;
    *this->_z *= coef;
    return *this;
}

Vector& Vector::operator /(double &coef){
    *this->_x /= coef;
    *this->_y /= coef;
    *this->_z /= coef;
    return *this;
}
