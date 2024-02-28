#ifndef FELINE_H
#define FELINE_H
#include "animal.h"

class Feline :public Animal{
    public:
    Feline(std::string furStyle,std::string description);
    ~Feline();

    virtual void run(){

        std::cout<<" animal is run called for: "<<m_description<<std::endl;
    }

    protected:
    std::string m_furStyle;

};















#endif
