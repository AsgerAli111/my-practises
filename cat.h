#ifndef CAT_H
#define CAT_H
#include"bird.h"

class Cat:public Feline{

    public:
Cat()=default;
Cat(std::string color,std::string description);
~Cat();

virtual void meow(){
    std::cout<<"animal cat is meowing "<<m_description<<std::endl;
}

virtual void run() override{
    std::cout<<"animal cat is running "<<m_description<<std::endl;
}

virtual void breath(){

    std::cout<<"animal cat is breathing "<<m_description<<std::endl;
}





};





#endif