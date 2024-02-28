#include "person2.h"



//constructor definition
Person::Person(){};
 Person::Person(std::string Name,std::string lName):firstNameParam(Name),lastNameParam(lName){


 }
 
std::ostream& operator<<(std::ostream&out ,Person& person){

    out<<"Name "<<person.getterf()<<" "<<person.getterl();


    return out;
 }
 Person::~Person(){}