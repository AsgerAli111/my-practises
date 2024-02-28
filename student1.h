#ifndef student
#define student
#include "person1.h"
#include<string>

class Student:public Person{
using Person::Person;
public:
 ~Student(){
    std::cout<<"\ndestructor called for student \n";
   }
   
std::string schoolName{"gsl school"};
std::string address{"navsari"};
int standard{0};

public:
//Student(std::string sName,std::string add,int std,int age2);
/*
 Student(std::string name, std::string gender, int age,std::string sName);
 Student(Student &source);

*/



 std::string getSchool();
 int getStd();
 std::string getAdd();
 void setSchool(std::string );
 void setStd(int);
 void setAdd(std::string);
//operator overloaing
 friend std::ostream& operator<<(std::ostream&,Student &studentobj);

};

#endif