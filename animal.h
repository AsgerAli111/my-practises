#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>


class Animal{

    public:
    Animal()=default;
    Animal(std::string description);
    ~Animal();

    virtual void breath()const {

        std::cout<<"Breath called for Animal "<<m_description<<std::endl;
    }
    protected:
    std::string m_description;
};


#endif