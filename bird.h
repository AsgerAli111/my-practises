#ifndef BIRD_H
#define BIRD_H
#include "animal.h"

class Bird :public Animal{

    public:
    Bird()=default;
    Bird(std::string color,std::string description);
    ~Bird();

    virtual void fly() const {

        std::cout<<"bird is flying called for: "<<m_description<<std::endl;
    }
     protected:
    std::string m_color;

    };

   

#endif