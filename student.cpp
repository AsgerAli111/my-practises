#include "student.h"
#include "person2.h"



//#include<string>


Student::Student(std::string joinMonth,int age,std::string address):joinMonth{joinMonth},age{age},address{address}{}
Student::~Student(){};
Student::Student(){};

std::ostream& operator<<(std::ostream& out,Student &student){

out<<"name from student is: "<<student.Person::getterf()<<student.Person::getterl(); //getterf is defined in base class person
return out;
}

void studentFunc(){
std::cout<<"\nfunc\n";
    
}