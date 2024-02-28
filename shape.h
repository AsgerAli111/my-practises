#ifndef  SHAPE_H
#define SHAPE_H
#include<iostream>

class Shape{


    //public constructor for shape
    public:
  
    Shape()=default;
    Shape(std::string description);
      ~Shape();
   
    
virtual void draw()const {
        std::cout<<"draw() with shape: "<<m_description<<std::endl;
    }

  virtual void draw(int color)const {

        std::cout<<"colour "<<color<<std::endl;
    }

    //data member for shape
    protected:
    std::string  m_description{""};


};


#endif