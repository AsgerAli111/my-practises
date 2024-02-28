#include "person.h"
  
//not workin line  857 in main file
int person::personCount=8;
person::person(const std::string& namesParam,int ageParam)
:fullName{namesParam},age{ageParam}{
    ++personCount;
}