#ifndef PIGEON_H
#define PIGEON_H
#include "bird.h"

class Pigeon :public Bird{

public:
Pigeon()=default;
Pigeon(std::string color,std::string description);
~Pigeon();


virtual void fly() const override{


    std::cout<<"fly called for "<<m_description<<std::endl;
}
virtual void koo(){


    std::cout<<" koo called for "<<m_description<<std::endl;
}

virtual void run()const {

    std::cout<<"run called for pigeon "<<m_description<<std::endl;
}

};







#endif