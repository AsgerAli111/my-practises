#include "shape.cpp"
#include "oval.cpp"
#include"circle.cpp"
#include<iostream>


int main(){

  Shape * shape_ptr = new Circle(10,"Circle1");
    shape_ptr->draw(45,"Red");

    
    return 0;
}