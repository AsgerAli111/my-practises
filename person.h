#ifndef PEROSON_H
#define PEROSON_H
#include<iostream>
//not working line 857 in main code
class person{
    public:

    person(const std::string& namesParam,int ageParam);

    void printInfo()const{
        std::cout<<" name: "<<fullName<<" age: "<<age<<std::endl;
    }

    private:
    std::string fullName;
    int age;
    public:
    static int personCount;
};
#endif