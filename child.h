#ifndef CHILD_H
#define  CHILD_H
#include "parent.h"

class Child :public Parent{
public:

Child();
~Child();
std::string message{"message from child class"};

};













#endif