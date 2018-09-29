#include "angle.h"

Angle::Angle()
{
    this->_alpha = 0;
    this->_tetta = 0;
    this->_omega = 0;
}

Angle::Angle(const double _alpha, const double _tetta, const double _omega){
    this->_alpha = _alpha;
    this->_tetta = _tetta;
    this->_omega = _omega;
}

Angle::Angle(Angle &cvec){
    this->_alpha = cvec.a();
    this->_tetta = cvec.o();
    this->_omega = cvec.w();
}

Angle::~Angle(){}

double Angle::a(){
    return this->_alpha;
}

double Angle::o(){
    return this->_tetta;
}

double Angle::w(){
    return this->_omega;
}

Angle& Angle::operator =(Angle& nvec){
    this->_alpha = nvec.a();
    this->_tetta = nvec.o();
    this->_omega = nvec.w();
    return *this;
}

Angle& Angle::operator +(Angle& plvec){
    this->_alpha += plvec.a();
    this->_tetta += plvec.o();
    this->_omega += plvec.w();
    return *this;
}

Angle& Angle::operator -(Angle& ervec){
    this->_alpha -= ervec.a();
    this->_tetta -= ervec.o();
    this->_omega -= ervec.w();
    return *this;
}
