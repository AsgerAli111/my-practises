#include "student1.h"
/*/
 Student::Student(std::string name, std::string gender, int age,std::string sName):
  Person(name, gender,age),schoolName{sName},standard{age}{}

  Student::Student(Student &source):
  Person(source),standard{source.age}{
    std::cout<<" copy constructor from student \n";
  }
*/



//getters definition
std::string Student:: getSchool(){
    return schoolName;
}

std::string Student:: getAdd(){
    return address;
}

int Student::getStd(){
    return standard;
}
 //setters definition
void Student:: setSchool(std::string sName){
    schoolName=sName;
}

void Student::setStd(int std){
    standard=std;
}

void Student::setAdd(std::string add){
    address=add;
}



//operator overloading definition
std::ostream& operator<<(std::ostream&out,Student& studentobj){

    out<<"DATA FROM STUDENT CLASS \n"<<
    "Name of the Student: "<<studentobj.getName()<<"\n"<<
    "Age of the Student: "<<studentobj.getAge()<<"\n"<<
    "Gender of the Student: "<<studentobj.getGender()<<"\n"<<
    "School Name of the Student: "<<studentobj.getSchool()<<"\n"<<
    "Address of the Student: "<<studentobj.getAdd()<<"\n"<<
    "Standard of the Student: "<<studentobj.getStd()<< "\n"<<"------------------------------------------------------------\n";

    return out;
}

