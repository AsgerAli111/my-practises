#include "oval.h"

//constructor that initiazes shape and oval class
Oval::Oval(double x,double y,std::string description):Shape(description),m_x{x},m_y{y}{}

 double Oval::getX(){
    return m_x;
}

double Oval::getY(){
    return m_y;
}

Oval::~Oval(){}