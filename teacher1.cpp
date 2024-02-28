
#include "teacher1.h"

Teacher::Teacher(std::string tName,int tId):teacherName{tName},teacherId{tId}{}
Teacher::Teacher(){
    std::cout<<"\ndefault constructor for teacher \n";
}

std::string Teacher:: getTName(){
    return teacherName;
}
int Teacher::getTId(){

return teacherId;
}

void Teacher :: setTName(std::string tNamde){
    teacherName=tNamde;
}

void Teacher::setTId(int id){

    teacherId=id;
}

std::ostream& operator<<(std::ostream& out,Teacher &teacherobj){

   out<<"DATA FROM Teacher CLASS \n"<<
    "Name of the Student: "<<teacherobj.getName()<<"\n"<<
    "Age of the Student: "<<teacherobj.getAge()<<"\n"<<
    "Gender of the Student: "<<teacherobj.getGender()<<"\n"<<
    "School Name of the Student: "<<teacherobj.getSchool()<<"\n"<<
    "Address of the Student: "<<teacherobj.getAdd()<<"\n"<<
    "Standard of the Student: "<<teacherobj.getStd()<< "\n"<<
    "Name of the Teacher: "<<teacherobj.getTName()<<"\n"<<
    "Id ot the Teacher Is: "<<teacherobj.getTId()<<"\n";
}

