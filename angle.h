#ifndef ANGLE_H
#define ANGLE_H


class Angle
{
private:
    double _alpha, _tetta, _omega;
public:
    Angle();
    Angle(const double _alpha, const double _tetta, const double _omega);
    Angle(Angle& cvec);
    ~Angle();
    double a(); //alpha
    double o(); //tetta
    double w(); //omega
    Angle& operator =(Angle& nvec);
    Angle& operator +(Angle& plvec);
    Angle& operator -(Angle& ervec);
};

#endif // Angle_H
