#ifndef CROW_H
#define CROW_H
#include "bird.h"
 
 class Crow:public Bird{
    public:
    Crow(std::string color,std::string description);
    Crow()=default;
    ~Crow();

    virtual void fly() const override{

        std::cout<<"crow is flying "<<m_description<<std::endl;
    }
    virtual void cow(){

        std::cout<<"crow is cowing "<<m_description<<std::endl;
    }

    virtual void breath(){

        std::cout<<"crow is breathing: "<<m_description<<std::endl;
    }
 };






#endif