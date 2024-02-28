// file1.cpp

#include "person1.h"
// Constructor implementation
Person::Person(std::string name)
    : personName{name}{

        std::cout<<"actual constructor for person classs \n";
    }



// Setter implementations
void Person::setName(std::string name) {
    personName = name;
}

void Person::setGender(std::string gender) {
    personGender = gender;
}

void Person::setAge(int newAge) {
    age = newAge;
}

// Getter implementations
std::string Person::getName() {
    return personName;
}

std::string Person::getGender() {
    return personGender;
}

int Person::getAge() {
    return age;
}


//overloading output operator

std::ostream& operator<<(std::ostream& out, Person&person){
    out<<"\nThe Name of The Person Is: "<<person.getName()<<
    
    "\n-------------------------------------------------------------------------------------------------------------\n";
    return out;
}



