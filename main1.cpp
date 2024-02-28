#include<iostream>
#include"class2.h"


int main(){
    Details k;
    Details *ptr_object=new Details;

    std::cout<<"Calling The Class Details: "<<(*ptr_object).info()<<std::endl;
    std::cout<<"again Calling Class with pointer:;"<<ptr_object->info();


delete ptr_object;

}