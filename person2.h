#ifndef person2
#define person2
#include<string>
#include<iostream>

class Person{

    public:
Person();
Person(std::string firstName,std::string lastName);
~Person();

friend std::ostream& operator <<(std::ostream & out,Person &person);
public:
void setterf(std::string firstName){
    firstNameParam=firstName;

}
void setterl(std::string lastName){

    lastNameParam=lastName;
}
std::string getterf(){

    return firstNameParam;
}
std::string getterl(){
    return lastNameParam;
}
protected:
std::string firstNameParam{"default name"};
std::string lastNameParam{"default"};


};
#endif
