// file1.h

#ifndef person1
#define person1
#include<iostream>
#include<string>
class Person {
public:
    // Constructor declaration
  
    Person(std::string name);

    ~Person(){

        std::cout<<"\nDESTRUCTOR CALLED FOR THE PERSON\n";
    }
    
    // Setter declarations
    void setName(std::string name);
    void setGender(std::string gender);
    void setAge(int age);

    // Getter declarations
    std::string getName();
    std::string getGender();
    int getAge();
    

 friend std::ostream& operator<<(std::ostream& ,Person &person);
 protected:
     std::string personName{"default person name"};
    std::string personGender{"not set"};
    public:
    int age{0};

};

#endif
