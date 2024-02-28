#include<iostream>
#include "parent.cpp"
#include "child.cpp"


int main(){


Parent p;
Child c;
std::cout<<"----------------------------------------------------\n";
std::cout<<"calling message member from parent class: "<<p.message<<"\n";
std::cout<<"----------------------------------------------------\n";
std::cout<<"calling message member from child class: "<<c.message<<"\n";
std::cout<<"----------------------------------------------------\n";
std::cout<<"----------------------------------------------------\n";
std::cout<<"calling message member of parent class from child: "<<c.Parent::message<<"\n";









    return 0;
}