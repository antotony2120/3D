#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
private:
    double* _x,* _y,* _z;
public:
    Vector();
    Vector(const double &_x, const double &_y, const double &_z);
    Vector(Vector& cvec);
    ~Vector();
    double x();
    double y();
    double z();
    Vector& operator =(Vector& nvec);
    Vector& operator +(Vector& plvec);
    Vector& operator -(Vector& ervec);
    Vector& operator *(double& coef);
    Vector& operator /(double& coef);
};

#endif // VECTOR_H
