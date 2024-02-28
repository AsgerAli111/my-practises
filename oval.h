
#ifndef OVAL_H
#define OVAL_H
#include<iostream>
#include"shape.h"

class Oval :public Shape{

    //public constructor for oval
    public:
    Oval()=default;
 
    Oval(double x,double y,std::string description);
     ~Oval();
virtual void draw()const override {
        std::cout<<"draw() with oval: "<<m_x<<" and "<<m_y<<"  "<<m_description<<std::endl;
    }


virtual void draw(int color,std::string colorName)const  {

    std::cout<<"color:: "<<color<<"  "<<"color name: "<<colorName<<std::endl;
}


    //member functon to get 

 double getX();
    double getY();

    //data members for oval
    private:
    double m_x;
    double m_y;

};


#endif