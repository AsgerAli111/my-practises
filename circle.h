#ifndef CIRCLE_H
#define CIRCLE_H
#include<iostream>
#include "oval.h"

class Circle :public Oval{

    //public constructor for class Circla

    public:
 
    Circle()=default;
    Circle(double x,std::string description);
     ~Circle(){};

  virtual void draw()const override {

        std::cout<<"draw() with circle:  "<<m_description<<std::endl;
    }


    
};






#endif