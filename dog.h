#ifndef DOG_H
#define DOG_H
#include "bird.h"
 
 class Dog:public Feline{
    public:
    Dog(std::string color,std::string description);
    Dog()=default;
    ~Dog();

    virtual void run()override{

        std::cout<<"dog is running "<<m_description<<std::endl;
    }
    virtual void bark(){

        std::cout<<"dog is barking "<<m_description<<std::endl;
    }

    virtual void breath(){

        std::cout<<"dog is breathing: "<<m_description<<std::endl;
    }
 };






#endif