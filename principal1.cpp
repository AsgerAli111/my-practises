#include "teacher1.h"
#include "principal1.h"
#include<string>


Principal::Principal(std::string pName,std::string pId):principalName{pName},principalId{pId}{}

std::string Principal::getPrincipalName(){

    return principalName;
}
std::string Principal::getPrincipalId(){
    return principalId;
}

std::ostream& operator<<(std::ostream&out,Principal&principalobj){

     out<<"DATA FROM principal CLASS \n"<<
    "Name of the Student: "<<principalobj.getName()<<"\n"<<
    "Age of the Student: "<<principalobj.getAge()<<"\n"<<
    "Gender of the Student: "<<principalobj.getGender()<<"\n"<<
    "School Name of the Student: "<<principalobj.getSchool()<<"\n"<<
    "Address of the Student: "<<principalobj.getAdd()<<"\n"<<
    "Standard of the Student: "<<principalobj.getStd()<< "\n"<<
    "Name of the Teacher: "<<principalobj.getTName()<<"\n"<<
    "Id ot the Teacher Is: "<<principalobj.getTId()<<"\n"<<
    "Name of the Principal is: "<<principalobj.getPrincipalName()<<"\n"<<
    "Id of the principal is: "<<principalobj.getPrincipalId()<<"\n";

}