#ifndef student
#define student
#include "person2.h"



class Student:public Person{
friend std::ostream& operator <<(std::ostream& out,Student &student);

public:
Student(std::string joinMonth,int age,std::string address);
~Student ();
Student();
void studentFunc();
private:
std::string joinMonth{"default month"};
std::string address{"L-203,Karishma Garden,Navsari,Gujarat,INDIA"};
int age{0};

};

#endif