#include<iostream>
#include<string>




/*---------------------------------------------------------------------------------------------------------------------------------------
#include "constant.h"
#include "class.h
#include<string>
#include<iomanip>
#include<ios>
//#include<bits/stdc++.h> // not standard cpp library file
#include<limits>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include "person.h"
#include "function1.h"
//#include<bits/stdc++.h>


void showAge1(int &age){
    std::cout<<" the age by reference is: "<< ++age<<std::endl;
}

int showAge(int *age){

    return ++*age;
}

int showAge(int);

int showAge(int age){

return ++age;


};
void info(){

    std::string name="asger ali";
    std::cout<<name;

};


int addition(int a,int b){

    return a+b;
}  

//function to compare and return

char comp(int a,int b){

    if(a>b)
    return static_cast<char>(a);
    else
    return static_cast<char>(b);
}
//function to add two numbers

int addNumbers(int a ,int b=5){

    int sum=a+b;
    return sum;
};  



void ptrFunc(int*,int*);
void refFunc(int &,int&);
void strFunc(const std::string&,const std::string&,std::string&);
void ptrFunc(const std::string*,const std::string*,std::string*);

//function overloading

int max(int ,int);
double max(double,double);
std::string max(std::string,std::string);



//tempelate declation

template<typename Kulsum> Kulsum add(Kulsum a,Kulsum b){

    return b+a;
};



//template funciton declaration for referrences

template<typename k> const k& add( const k& a,const k&b);





template<typename k> k compare(k a,k b){

    return a>b?a:b;
};
//specialized templates

template<>
int compare <int>(int a,int b){
  

    std::cout<<"the greater from both integers is:  "<<std::endl;
    return a>b?a:b;
};




template<>
int* compare<int*>(int* a, int* b) {
    std::cout << "Pointer called" << std::endl;
    return *a > *b ? a : b;
}

class Dog{

    //member variables declarations
 std::string nameParam{"noName"};
 std::string breedParam{"noBreed"};
 int *ptr_age{nullptr};

 public:

//constructor
Dog(std::string name,std::string breed,int *dogAge);


    //function declaration,definition outside class
    void dogInfo();

//destructor,defined outside the class
~Dog();
};
//constructor for Dog Class ,defined outside the class
Dog::Dog(std::string name,std::string breed,int *dogAge){

     nameParam=name;
     breedParam=breed;
    ptr_age=new int;
    *ptr_age=*dogAge;
    std::cout<<"Constructor Called For "<<nameParam<<std::endl;
    //delete ptr_age;


}
Dog::~Dog(){

   
    std::cout<<"\nDestructor Called For "<<nameParam<<std::endl;
     delete ptr_age;

    
}
void Dog:: dogInfo()
    {
        std::cout<<"Dog Name Is: "<<nameParam<<std::endl;
        std::cout<<"Dog Age Is: "<<*ptr_age<<std::endl;
    }

void callThroughFunc(){

    int*ptr3=new int;
    *ptr3=5;

    Dog *dog_ptr=new Dog("mukuwa","stray",ptr3);

    delete ptr3;
    delete dog_ptr;
    
    
}






//class

class Dog{

    std::string dogName{"noname"};
    std::string dogBreed{"nobreed"};
    int dogAge{};



    public:
    Dog(std::string name,std::string breed,int age);
    ~Dog();
    Dog* setDogName(std::string dogName);
    Dog* setDogBreed(std::string dogBreed);
    Dog* setDogAge(int Age);

    Dog* getDogName();
    Dog* getDogBreed();
    Dog* getDogAge();

    Dog()=default;


};


//constructor definition
Dog::Dog(std::string name,std::string breed,int age){

    std::cout<<"Constructor Called and an object created at address: "<<this<<std::endl;

    dogName=name;
    dogBreed=breed;
    dogAge=age;
}


//destructor definition

Dog::~Dog(){

    std::cout<<"Destructor called for object at address: "<<this<<std::endl;
    
}

Dog* Dog::getDogName(){

    std::cout<<"Dog Name: "<<dogName<<std::endl;
return this;
}

Dog* Dog::getDogBreed(){

    std::cout<<"Dog Breed : "<<dogBreed<<std::endl;
    return this;
}

Dog* Dog::getDogAge(){

    std::cout<<"Dog Age: "<<dogAge<<std::endl;
    return this;
}

Dog* Dog::setDogName(std::string dogName){

     this ->dogName=dogName;
     return this;
}
Dog* Dog::setDogBreed(std::string dogBreed){
    this->dogBreed=dogBreed;
    return this;
}
Dog* Dog::setDogAge(int dogAge)
{

    this->dogAge=dogAge;
    return this;
}


//starting class
struct::FirstStruct(std::string name,int *age){

    this->name=name;
    this
//structures


struct FirstStruct{


    int age{20};
    std::string name{"asger"};

    void showName(){

        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
      
    }
    FirstStruct()=default;
    FirstStruct(std::string,int *age);
    ~FirstStruct();
};
FirstStr->age=*age;
    std::cout<<"called by object address: "<<this<<std::endl;  
}
FirstStruct::~FirstStruct(){
    std::cout<<"Destructor called for address: "<<this<<std::endl;
}


//cocepts only supports over version cpp20
//done in online compiler
//-------------------------------------------------------------------------------------------------------------------------------------------

//inheritence

class Student{
    protected:
    int stdId{};
    std::string stdName{};
    std::string stdBranch{};


    public:
    void showData(){

        std::cout<<"Name: "<<stdName<<"\n"<<"stdId: "<<stdId<<"\n"<<"stdBranch: "<<stdBranch<<"\n";
    }
  
};

class Data: protected Student
{
public:
    Data(std::string name,std::string branch,int a){
            stdId=a;
            stdName=name;
            stdBranch=branch;

    }
    public: 
    void showData2(){
        showData();
    }

};

*/

//class inheritence
















int main(){










 


//----------------------------------------------------------------------------------------------------------------------------------------------


/*

    std::cout<<" Hello Kulsum "<<std::endl;
    std::cout<<" Hi Asger "<<std::endl;

    int a=5,b=5,sum;

    sum=a+b;
    /*
    sum=addNumbers(5,5);
    sum=addNumbers(a,10);

    std::cout<<" The Value Of A,B is  "<<a<<" "<<b<<" and by function value is "<<std::endl<<addNumbers(10,10)<<" The value save in sum variable is "<<std::endl<<sum;
     
     std::cerr<<std::endl<<" something went wrong ";

     
  

std::string name;
 // char name[30];
  int age;
  std::string fName;

  std::cout<<" Enter name and age respectively "<<std::endl;
  std::getline(std::cin,name);
  std::cin>>age;
 std::cout<<"enter your fathers name "<<std::endl;
  std::getline(std::cin,fName);
  
  
  
  std::cout<<"MY name is:  "<<name<<"  and my age is: "<<age<<" "<<fName<<" is your father"<<std::endl;

  std::cerr<<" This is an error handeling message "<<std::endl;
  std::clog<<"this is a log message "<<std::endl;

    
     //number system

     int number= 14; //decimal
     int number1=0x14; //hexadecimal
     int number2=014; //octal
     int number3=0b11010; //binary

     //the output will always display in decimal number system

     std::cout<<" Number systen representatiion"<<std::endl;
      std::cout<<number<<std::endl;
      std::cout<<number1<<std::endl;
      std::cout<<number2<<std::endl;
     std::cout<<number3<<std::endl;

     std::cout<<"New Line Starts Here "<<std::endl;

    int aNumber=4.2;
    int bNumber=(4.2);
    //int cNumber {4.2};

    std::cout<<aNumber<<std::endl;
    std::cout<<bNumber<<std::endl;
   // std::cout<<cNumber<<std::endl;
  
  std::cout<<sizeof(aNumber);
 

 //integer modifiers 2bytes

 short val{45};
 short int val1{45};
 signed short val2{-45};
 signed short int val3 {-45};
 unsigned short int val4{45};

 // integers 4bytes

 int val5 {50};
 signed val6{50};
 signed int val7{50}; 
unsigned int val8{50};

// long 4\8bytes

long val9{555555655};
long int val10{55667656};
signed long val11{5545643};
signed long int val12{55354656};
unsigned long int val13{5345655};

//long long 8 bytes

long long val14{605656};
long long int val15{56476560};
signed long long val16{665740};
signed long long int val17{6465740};
unsigned long long int val18{64657460};

std::cout<<" \t\t\tShowing different standard of integers"<<std::endl;
std::cout<<"short value is "<<val<<" and size is: "<<sizeof(val)<<std::endl;
std::cout<<"unsigned short int value is: "<<val5<<" and size is: "<<sizeof(val5)<<std::endl;
std::cout<<"int value is "<<val5<<"  and size is: "<<sizeof(val5)<<std::endl;
std::cout<<"unsigned int value is "<<val8<<" and size is: "<<sizeof(val8)<<std::endl;
std::cout<<"long value is "<<val9<<" and size is: "<<sizeof(val9)<<std::endl;
std::cout<<"unsigned long int value is "<<val13<<" and size is: "<<sizeof(val13)<<std::endl;
std::cout<<"long long value is "<<val14<<" and size is: "<<sizeof(val14)<<std::endl;
std::cout<<"unsigned long long int "<<val18<<" and size is: "<<sizeof(val18)<<std::endl;


// data types
 double doubleNumber=5.2e90;
float floatNumber{1.12345678912345678f};
long double longdoubleNumber{2.12345678901234567890123l};
std::cout<<std::setprecision(20);
std::cout<<" doube Number "<<doubleNumber<<" and the size is "<<sizeof(doubleNumber)<<std::endl;
std::cout<<" float Number "<<floatNumber<<" and the size is "<<sizeof(floatNumber)<<std::endl;
std::cout<<" long double number "<<longdoubleNumber<<" and the size of "<<sizeof(longdoubleNumber)<<std::endl;
std::cout<<"_________________________________________________________________________________"<<std::endl;
std::cout<<std::setprecision(3);
double number1 {6};
double number2 {7};
double number3{0};
double number4{0};
double number5{0.0};
double number6{0.0};

std::cout<<" number not declared division "<<number1/number2<<std::endl;
std::cout<<" zero division by zero "<<number3/number4<<std::endl;
std::cout<<" 0.0 division by itselt "<<number5/number6<<std::endl;

//boolean data typw

bool state{};
std::cout<<std::boolalpha;

std::cout<<state;

//character and text

char value =65;

std::cout<<" The Character value as it is  "<<value<<std::endl; 
std::cout<<" The character value printing its integer value "<<static_cast<int>(value)<<std::endl;

char name[9]={'a','s','g','e','r'};//muat to declare with curly braces 

std::cout<<name[1];



//auto data type

auto var1{1};
auto var2{1.2};
auto var3{1.222222222f};
auto var4{2.12345678l};
auto var5{1e2};
auto var6{234ul};
auto var7{234ll};

std::cout<<" the variable1 is  "<<var1<<" and size is "<<sizeof(var1)<<" bytes"<<std::endl;
std::cout<<" the variable2 is "<<var2<<" and size is "<<sizeof(var2)<<" bytes"<<std::endl;
std::cout<<" the variable3 is "<<var3<<" and size is "<<sizeof(var3)<<" bytes"<<std::endl;
std::cout<<" the variable4 is "<<var4<<" and size is "<<sizeof(var4)<<" bytes "<<std::endl;
std::cout<<" the variable5 is "<<var5<<" and size is "<<sizeof(var5)<<" bytes "<<std::endl;
std::cout<<" the variable6 is "<<var6<<" and size is "<<sizeof(var6)<<" bytes"<<std::endl;
std::cout<<" the variable7 is "<<var7<<" and size is "<<sizeof(var7)<<" bytes"<<std::endl;



//assignments 

auto var1 {2.12d};


std::cout<<" variable one is before assignments  "<<var1<<std::endl;
std::cout<<sizeof(var1)<<std::endl;
var1 = 45.12;
std::cout<<" variable one is after assignments "<<var1<<std::endl;
std::cout<<sizeof(var1);

//operation on variables

int var1{12};
int var2{7};
int varResult{};

varResult=var1% var2;
std::cout<<varResult<<std::endl;
var1+=10;

std::cout<<var1;
std::cout<<"--------------------------------------------------------------------"<<std::endl;
std::cout<<" comparison between var1 and var2 is "<<std::boolalpha<<(var1<var2)<<std::endl;

varResult=(var1<var2);      //no need to use if statement here;
std::cout<<varResult;

//logical operator  || ,&,!
// output formatting

std::cout<<" ::::::::::::::::::::::::::: Output formatting:::::::::::::::::::::::\n";

std::cout<<"above showed the use of endl \n"; //prints new line character

std::cout<<std::setw(40)<<"printed with set width"<<std::endl;
std::cout<<std::setw(40)<<" NAME ";
std::cout<<std::setw(20)<<" NUMBER "<<std::endl;
std::cout<<std::setw(40)<<" Asger "<<std::setw(20)<<"8874"<<std::endl;
std::cout<<std::setw(40)<<" kulsum "<<std::setw(20)<<"9369"<<std::endl;

std::cout<<std::flush<<"ASGER\n";//flush to the terminal  

int col_width=20;
//std::cout<<std::right;
std::cout<<std::setw(col_width)<<"asger with col_width"<<std::endl;
//std::cout<<std::right;
std::cout<<std::setw(10)<<"showing without internal justification "<<-1.43<<std::endl;
//std::cout<<std::internal;
std::cout<<std::setw(10)<<std::internal<<-1.43<<std::endl;
//std::cout<<std::left;
//std::cout<<std::setfill('-')<<std::endl;      //currently now working here bcz it works with setw()
std::cout<<std::showpos;
std::cout<<col_width<<std::endl; 
std::cout<<std::noshowpos;
std::cout<<" showing numbers with their base "<<std::endl;
std::cout<<" showing with decimal base "<<std::dec<<col_width<<std::endl;
std::cout<<" showing with hexadecimal base "<<std::hex<<col_width<<std::endl;
std::cout<<" showing with octal base "<<std::oct<<col_width<<std::endl;

std::cout<<" converting col_width positive to negative"<<std::endl;
col_width=-12;
std::cout<<" showing with decimal base "<<std::dec<<col_width<<std::endl;
std::cout<<" showing with hexadecimal base "<<std::hex<<col_width<<std::endl;
std::cout<<" showing the flush statement "<<std::flush;
//static_cast<double>(col_width);
//col_width=1.234;
 var2={1755}; //does not work for float type numbers it is not suppossed to work
std::cout<<" showing float numbers "<<std::endl;
std::cout<<" showing with decimal base "<<std::dec<<var2<<std::endl;
std::cout<<" showing with hexadecimal base " <<std::hex<<var2<<std::endl;
std::cout<<std::setw(40)<<"ASGER IS IN LOVE WITH CODING "<<std::endl;
std::showbase;
std::uppercase;
std::cout<<std::showbase<<std::dec<<var2<<sizeof(var2)<<std::endl;

std::cout<<" flush message "<<std::endl<<std::flush;
std::cout<<std::setfill('-');
std::cout<<std::setw(20)<<var2;
std::cout<<"\n printing new work from  here "<<std::endl;
std::cout<<" the  min numeric limit of interger is "<<std::numeric_limits<int>::min()<<std::endl;
std::cout<<" the max numeric limit of integer is "<<std::numeric_limits<int>::max()<<std::endl;
std::cout<<" the lower numeric limit of signed integer is "<<std::numeric_limits<long long int>::min()<<std::endl;
std::cout<<" the max numeric limit of long long integer is "<<std::numeric_limits<long long int>::max()<<std::endl;

//math functions

float number1{10000};

std::cout<<" The number with round value is "<<std::round(number1)<<std::endl;
std::cout<<" the number with floor value is "<<std::floor(number1)<<std::endl;
std::cout<<" the number with ceil value is "<<std::ceil(number1)<<std::endl;
std::cout<<" the power of number is "<<std::pow(number1,2)<<std::endl;
std::cout<<" THE Exponent of a number is "<<std::exp(number1)<<std::endl;
std::cout<<" the absolute value of a number is "<<std::abs(number1)<<std::endl;
std::cout<<" the log function is "<<std::log10(number1)<<std::endl;//default log is set to 'e'


  //conditional operator
bool number1{true};
int number2{45};
(!number1)?number1=false:number1=true;
std::cout<<" status: "<<std::boolalpha<<number1;


   

//switch statement
int choice{2};

switch(choice){

    case 1:

    std::cout<<" case one selected "<<std::endl;
    break;

    case 2:
    std::cout<<" case two is selected "<<std::endl;
    break;

    default:
    std::cout<<" no selection "<<std::endl;
}


//loops

size_t i=10;

for(;i<=20;i++){
    std::cout<<" The initial value of i is: "<<" I LOVE YOU KULSUM"<<std::endl;
}

std::cout<<" printing with do while loop "<<std::setfill('_')<<std::setw(20)<<std::endl;

 do{

    std::cout<<"doing with do loop "<<std::endl;
    i++;
    
 }

 while(i<40);

 std::cout<<" doing same with range-based loop"<<std::endl;



 std::cout<<" trying for range loop"<<std::endl;
 


//arrays of numbers

int array[]{2,5,8,2,5,6,9};

    int sum={0};
    for(auto val:array){

      std::cout<<" the value of auto var variable is: "<<array[val]<<std::endl;
    }

    std::cout<<" size of array is: "<<sizeof(array)<<std::endl;
    int sid{std::size(array)}; //does not support below 2017 compilers
        std::cout<<" size of array is: "<<std::size(array);

//std::cout<<array[1];


//arrays of characters


char characters[10]{'a','s','g','e','r',' ','a','l','i'};
std::cout<<" printed from range-based loop: ";
for(auto count:characters){
    std::cout<<count;
}

std::cout<<"\nThe size of arrray is: "<<sizeof(characters)<<std::endl;
std::cout<<" the char at index 0 is: "<<characters[0]<<std::endl; 
std::cout<<" the char at no index is: "<<characters<<std::endl; //not only first value


std::setfill('-');
std::cout<<std::setw(40)<<std::setfill('-')<<" trying literals "<<std::endl;

char mst[]{"asgera ali"};

std::cout<<" printing directly :"<<mst<<std::endl;
std::cout<<" printing exact indexed value: "<<mst[7];

for(auto fun:mst){
    std::cout<<fun;
}


//pointers
int a=23;

int* p_a{&a};

std::cout<<" The addresss of a is: "<<p_a<<std::endl;

int b=34;
 //p_a={&b};

 

std::cout<<" the address of  b is: "<<p_a<<std::endl;
std::cout<<" the value of a is directly "<<a<<std::endl;
std::cout<<" the value of a is by pointer "<<*p_a<<std::endl;
std::cout<<" changing the address "<<std::endl;
*p_a=32;
std::cout<<" now the value of a is: "<<a<<std::endl;
std::cout<<" The size of pointer is: "<<sizeof(p_a);   
std::cout<<"\n\n\n\t derefferencing the printer "<<std::endl;
//clrscr();
p_a={nullptr};
std::cout<<"accessing the address after nullptr "<<p_a<<std::endl;
//std::cout<<"accessing the element by nullptr"<<*p_a<<std::endl;
std::cout<<"\n\n\n character ponter"<<std::endl;

const   char*pmsg{"asgerali"};
char charas{'k'};
std::cout<<" printing with character pointer: "<<pmsg<<std::endl;
pmsg={&charas};
std::cout<<" printing with * "<<*pmsg<<std::endl;
std::cout<<" after changing string: "<<pmsg<<std::endl;
std::cout<<" running properly"<<std::endl;
std::cout<<" printing address "<<&pmsg<<std::endl;
//std::cout<<" address of charas is "<<&charas<<std::endl;


//dynamic allocation of memory


std::cout<<"__________________________________________________________________________________________________________________________________"<<std::endl;

int*number1={new int};//contains a junk value
int *number2={new int (34)};  
int*number3={new int {56}};


std::cout<<" address of number1 is "<<number1<<"   and data is  "<<*number1<<std::endl;
std::cout<<" address of number2 is "<<number2<<"    and data is  "<<*number2<<std::endl;
std::cout<<" address of number3 is "<<number3<<"     and data is  "<<*number3<<std::endl;


delete number1;
delete number2;
delete number3;


number1=nullptr;
number2=nullptr;
number3=nullptr;


std::cout<<"                        reprinting\n";// does not print anything as defined nullptr

 number1 ={new int {36}};
number2 ={new int {45}};
number3 ={new int {56}};


std::cout<<" address of number1 is "<<number1<<"   and data is  "<<*number1<<std::endl;
std::cout<<" address of number2 is "<<number2<<"    and data is  "<<*number2<<std::endl;
std::cout<<" address of number3 is "<<number3<<"     and data is  "<<*number3<<std::endl;

delete number1;
number1=nullptr;
delete number2;
number2=nullptr;
delete number3;
number3=nullptr;



int*ptr1={nullptr};
int a=108;
ptr1=&a;

std::cout<<" address of a is: "<<ptr1<<std::endl;
std::cout<<"value at ptr1 is: "<<*ptr1<<std::endl;

std::cout<<" allocating a dynamic pointer "<<std::endl;

int *ptr2=new int{*ptr1};

std::cout<<" getting value of ptr from dynamic "<<*ptr2<<std::endl;



//pointer dandelling
//when new fails
std::cout<<" dandling pointer\n";
int a{89};

int*ptr1={&a};
int*ptr2;
int *ptr3; 

ptr2=new int ;

delete ptr2;

std::cout<<" \n calling undefined pointer "<<*ptr1;
std::cout<<" \ncalling deleted pointer "<<*ptr2;


//when new fails to allocate memory

std::cout<<" showing working of new failure \n";


try{
for(size_t i{0};i<1000;i++){
    std::cout<<" working in the loop "<<i<<std::endl;
    int*pNum1=new int[1000000];
    }
}

    catch(std::exception &kul){

        std::cout<<" error occured: "<<kul.what()<<std::endl;
    
    }

std::cout<<" test passed";




for(size_t k{0};k<1000;k++){

    int* arr=new (std::nothrow)int [100000000];//works almost same as try catch block-----
    std::cout<<"running in the loop: "<<k<<std::endl;
}
std::cout<<" program ended well ";



//null pointer safety measures


int a;
int *ptr={&a};

if(ptr){

    std::cout<<" is not a null ptr \n";
            
}
else{
    std::cout<<" is a null ptr";

}
ptr==nullptr;

//memory leaks

int*pNumber1={new int {67}}; //points to 67

std::cout<<*pNumber1;
int number1{34};
pNumber1={&number1};//we lost the access of pNumber1
std::cout<<pNumber1;

//dynamic arrays
int* array3={new int [45]()};
int* array2={new int[45]{}};
int* array={new int[50000000]{1,2,5}};

std::cout<<*array;

std::cout<<" running ";

delete[]array3;
array3=nullptr;
delete[]array2;
array2=nullptr;
delete[]array;
array=nullptr;

std::cout<<"\n __________________________________________________________________\n";
size_t size=11;
int* arr={new (std::nothrow)int [size]{0,1,3,4,5,6,7,8,9}};

if(arr){
std::cout<<" the size of array is "<<sizeof(arr)<<std::endl;
for(size_t i={0};i<size;i++){

    
    //std::cout<<" size of the array is: "<<size(arr[])<<"\n";
    std::cout<<" address of the first element is: "<<arr[i]<<std::endl;
    std::cout<<" the element of the element is: "<<&arr[i] <<std::endl;
}
}

delete[]arr;
arr=nullptr;



//reference
//references is alias for the variable
int aVariable{56};
int &aRefVariable{aVariable};

std::cout<<" printing the reference variable "<<std::endl;
std::cout<<" the value from simple variable is "<<aVariable<<std::endl;
std::cout<<" printing through reference variable "<<aRefVariable<<std::endl;
std::cout<<" the size of the reference variable is: "<<sizeof(aRefVariable)<<std::endl;
std::cout<<" the address of the reference variable is: "<<&aRefVariable<<std::endl;
std::cout<<" changing the value by reference variable "<<std::endl;
aRefVariable=45;
std::cout<<" now the value is : "<<aVariable<<std::endl;
int *ptr=&aRefVariable;
std::cout<<" the address of the aVariable is: "<<&aVariable<<std::endl;
std::cout<<" the address through pointer is: "<<ptr;


//pointers and references

int var{34};
int* const ptr{&var};
int var3 {45};
std::cout<<" dereferencing the value: "<<*ptr<<std::endl;
ptr={&var3};



//using const with refernces

int number1{90};
const int&refVar{number1};

//  refVar=34;           //gives and error bcz it is declared as const

std::cout<<" the value by reference variable (const) is: " <<refVar<<std::endl;


//trying same with pointers
int age{56};
const int* const ptr{&age};
//*ptr=45;   //gives error

std::cout<<" accessing through it "<<*ptr;


//...................................................................................................................

//strings and manipulation
char c={'H'};
std::cout<<" the character is: "<<c<<std::endl;

std::cout<<" testing all the fucntions "<< std::endl;
std::cout<<" is alnum  "<<std::isalnum(c)<<std::endl;
std::cout<<" is alpha  "<<std::boolalpha<<std::isalpha(c)<<std::endl;
std::cout<<" is digit  "<<std::isdigit(c)<<std::endl;
std::cout<<" is upper  "<<std::isupper(c)<<std::endl;
std::cout<<" is lower  "<<std::islower(c)<<std::endl;

//some more operation on characters
char msg[]={"asger and Didi Can not play together. "};
std::cout<<" the message is: "<<msg<<std::endl;

size_t count{0};

for(size_t a=0;msg[a]!='\0';++a){

    if(std::isspace(static_cast<unsigned char>(msg[a]))){
        count++;
    }
}

    std::cout << "The blank spaces: " << count << std::endl;


//case conversion of the strings or count the characters of total upper or lower in a string
size_t lowercount=0;
size_t upperCount{0};
for(auto order:msg){

    if(std::islower(order)){
        lowercount++;
    }
    if(std::isupper(order)){
        upperCount++;
    }
}


    std::cout<<" total lower counts: "<<lowercount<<std::endl;
    std::cout<<" total upper counts: "<<upperCount<<std::endl;

    

    char charStr[50];

    for(size_t i=0;msg[i]!='\0';i++){

        charStr[i]=std::toupper(msg[i]);
    }
    std::cout<<" the modified uppercase string is: "<<charStr<<std::endl;

    //printing the same strin afte modifying to small order
    std::cout<<" now converting same to lower case: "<<std::endl;

    char msg2[50];

    for(size_t i{0};charStr[i]!='\0';i++){

        msg2[i]=std::tolower(charStr[i]);
       
    }
    std::cout<<msg2<<std::endl;
    

    //operations with strings

    const char* msg={" asger and kulsum "};
    std::cout<<" msg: "<<msg<<std::endl;  

     const char* msg2{" AsgeR and Kulsum used to play"};
    std::cout<<" msg2: "<<msg2<<std::endl;
    const char* msg3={" Asger and kulsum used to play"};
    std::cout<<" msg3: "<<msg3<<std::endl;
    std::cout<<" the size of msg2 is: "<<sizeof(msg2)<<std::endl; 
    size_t len{};
    len=strlen(msg2);
    std::cout<<" the length of the string is: "<<len<<std::endl;
    std::cout<<" the size of the string is: "<<sizeof(msg2)<<std::endl;
    std::cout<<" comparing msg2 and msg3: "<<strcmp(msg,msg3)<<std::endl;
    size_t n{5};
    std::cout<<" the digit comparison is: "<<strncmp(msg2,msg3,7)<<std::endl;
    std::cout<<" character search"<<std::endl;
    
    const char* str2=msg;
    const char* str3=msg;
    char target='a';
    std::cout<<strchr(str2,target)<<std::endl;
    std::cout<<"--------------------------------------------"<<std::endl;
    while((str3=strchr(str3,target))!=nullptr){

        std::cout<<str3<<std::endl;
        str3++;


    }

    

    // THE LAST OCCURENCE OF A CHARACTER
    // strrchr(str,trg);

    const char* msg="d/backup/asger/mp4/asger/videos/asger videos.";
    const char*str={nullptr};

    std::cout<<" the msg is: "<<msg<<std::endl;

    str=strrchr(msg,'/');
    if(str!=nullptr){

        std::cout<<str+1;
    }

    else{

        std::cout<<" the string reached to null "<<std::endl;
    }


//concatination and copying

char src[52]=" asger ali and ";
char des[80]="kulsum";
std::cout<<" concatinated string is: "<<strcat(src,des)<<std::endl;
std::cout<<" trying with new(heap allocation)"<<std::endl; 

char *str=new char [20];
char *str2 =new char[10];
strcpy(str,"asger ali");
strcpy(str2," and kulsum");
char *str3=new char[strlen(str)+strlen(str2)+1];
strcpy(str3,str);
std::strncat(str3,str2,6);
std::cout<<" the concatenated strings are: "<<str3<<std::endl;

delete[]str;
delete[]str2;
delete[]str3;
//not working yet

//str::string,different from cstring

std::string str={ " asger ali & this is first string"};
std::string str2={ str};
std::string str3={ " asger and kulsum",5};//initialize only with 5chars
std::string str4( 5,'k'); //inialize with 5 copies of k
std::string str5={str,5,20};

std::cout<<" printing out the strings one by one "<<std::endl;
std::cout<<" the content of str1 is: "<<str<<std::endl;
std::cout<<" the second string is: "<<str2<<std::endl;
std::cout<<" the third string is: "<<str3<<std::endl;
std::cout<<" the fourth string is: "<<str4<<std::endl;
std::cout<<" the fifth string is: "<<str5<<std::endl; 
std::cout<<" the length of string is: " <<sizeof(str)<<std::endl;



//fucntions


info();
std::cout<<"\n"<<comp(65,2);

if(comp(5,10)<static_cast<char>(20))
std::cout<<"\n the fundtion is lesser"<<std::endl;
std::cout<<" the addition of numbers is: "<<addNumbers(10)<<std::endl;

//working with one definition rule\

int firstNumber{}; 

std::cout<<" ADDITION IS:   "<<addition(10,50)<<std::endl;

//doing ODR with class
 
struct person{

    double a;
    double b;
};

person con;
con.a=45;

std::cout<<" the class value is: "<<con.a;
  


person p("asger ali",20); //not working 
p.printInfo();

//creating new header files
std::cout<<" working with header files"<<std::endl;
//max1(5,10);     //not working



//call by value and reference

int mainAge{20};

std::cout<<" the age before function call is: "<<mainAge<<std::endl;
std::cout<<" the value inside function is: "<<showAge(mainAge)<<std::endl;
std::cout<<" the age after fucntion call is: "<<mainAge<<std::endl;
std::cout<<" calling by reference"<<std::endl;
//by pointer
std::cout<<" the age before function call is: "<<mainAge<<std::endl;
std::cout<<" the age while function call is: "<<showAge(&mainAge)<<std::endl;
std::cout<<" the age after function call is: "<<mainAge<<std::endl;

//by reference

std::cout<<" the age before fucntion call is:"<<mainAge<<std::endl;
showAge1(mainAge);
std::cout<<" the age after fucntion call is: "<<mainAge<<std::endl;
 

 
//getting things out of functions

std::cout<<"working with strings "<<std::setw(120)<<std::setfill('-')<<""<<std::endl;

std::string str1="asger";
std::string str2="kulsumaaaaaaaa";
std::string str3;

std::cout<<" pringting the str3 before: "<<str3<<std::endl;
strFunc(str1,str2,str3);
std::cout<<" printing the str3 after function: "<<str3<<std::endl;
std::cout<<std::setw(120)<<std::setfill('-')<<""<<std::endl;
std::string*ptr1=&str1;
std::string *ptr2=&str2;
std::string*ptr3=&str3;

std::cout<<" pringting with pointers "<<std::endl;
ptrFunc(ptr1,ptr2,&str3);
std::cout<<str3<<std::endl;


int a=23,b=4;
int*ptr=&a;
int *ptr3=&b;
ptrFunc(ptr,&b);
refFunc(a,b);
 


 

std::string str1{"banana"};
std::string str2{"apple"};
std::string str3;
strFunc(str1,str2,str3);

std::cout<<"from reference: "<<str3<<std::endl;
ptrFunc(&str1,&str2,&str3);

std::cout<<"from pointer: "<<str3;


std::cout<<max("kulsum","asger")<<std::endl;



//lamda funtion

auto Func=[](int a,int b){
    std::cout<<a+b;


};
Func(45,45);



//setting the return type

auto result1=[](double a, double b)->int{

return a+b;
};
auto result2=[](double a,double b)->double{
    return a+b;
};

auto result3=result1(10.2,45.3);
auto result4=result2(10.2,45.3);

    std::cout<<" the result of lamda function result1 is: "<<result1(10.2,45.3)<<std::endl;
    std::cout<<" the size of the lamda fucntion result1 is: "<<sizeof(result3)<<std::endl;
    std::cout<<" the result of the lamda function result2 is "<<result2(10.2,45.3)<<std::endl;
    std::cout<<" thge size of the lamda function is: "<<sizeof(result4)<<std::endl;
    

   double a{56.6};
   double b{34.8};

   auto func=[&a](){

    std::cout<<" the value of a  Inside lambda function is: "<<a<<std::endl;
    
   };

   for (size_t k=1;k<5;k++){

        std::cout<<" the value of a Inside Loop is: "<<a<<std::endl;
        a++;
        func();
   }
   std::cout<<" the size of the function is: "<<sizeof(func);
   

  std::string str1{"asger and "};
  std::string str2{" kulsum"};
  std::string str3;

    auto func2=[&]()mutable{
        str3=str1+str2;
        std::cout<<"The output of the merged string is: "<<str3<<std::endl;
    };

    func2();
    std::cout<<"str3 outside lambda is: "<<str3<<std::endl;

   //function tempelates

  std::string str1{"asger"};
  std::string str2{" kulsum"};

//std::cout<<"template function called "<<add(str1,str2)<<std::endl;
int result=add(3,6);
std::cout<<std::endl;
std::cout<<result;
std::cout<<std::endl;
std::cout<<add(3,5);
std::cout<<std::endl;
std::cout<<add(3.5,5.8);
std::cout<<std::endl;
std::cout<<add(str1,str2);
std::cout<<std::endl;
std::cout<<add<double>(2.5,45);
std::cout<<std::endl;
std::cout<<add<std::string>("ali","asger");




//template functions with referrence
int a=45,b=56;

int func=add(a,b);
std::cout<<func;
std::cout<<"\ndirect address of a is: "<<&a<<std::endl;



//std::cout<<compare(10.6,45.8);

//char* a{"asger"};
//char* b{"kulsum"};
int c=5,d=20;
int *a=&c;
int *b=&d;
std::cout<<"address of a is: "<<a<<std::endl;
std::cout<<"address of b is: "<<b<<std::endl;
std::cout<<compare(c,d)<<std::endl;
//std::cout<<compare(34,54);



//concepts //done in online compiler


//class

Circle a (5,6);
Circle v;


std::cout<<"Area Of The Circle Is: "<<a.circleArea()<<std::endl;
std::cout<<"Height Of The Circle Is: "<<a.get()<<std::endl;
a.set(5);
std::cout<<"After Setting Area Of The Circle Is: "<<a.circleArea()<<std::endl;
std::cout<<"After Setting Height Of The Circle Is: "<<a.get()<<std::endl;


//class


    callThroughFunc();

    std::cout<<"\nreached main function";




Dog *dog=new Dog("muku","street",3);

    (*dog).getDogName();
    dog->getDogBreed();
    dog->getDogAge();
    delete dog;

    std::cout<<"____________________________________________________________________________________________________________"<<std::endl;

Dog k;
k.setDogName("sherusheru")->setDogBreed("street")->setDogAge(4);
k.getDogName()->getDogBreed()->getDogAge();
//structure
        FirstStruct a;
    a.showName();
    int age=20;
    FirstStruct* b=new FirstStruct("Asger Ali",&age);  
    b->showName();

    std::cout<<"the size of the object is: "<<sizeof(a)<<std::endl;
    std::cout<<"the isze of the class is: "<<sizeof(FirstStruct)<<std::endl;
    

    delete b;  
    Data a("asger","computer",0072);
a.showData2();








*/


// closure of main function

return 0;
}









/*
//defining the function

void ptrFunc(int* ptr1,int *ptr2){

    std::cout<<"the sum by pointer is: " <<*ptr1+*ptr2<<std::endl;
};

//defining the function



void refFunc(int &a,int &b){

    std::cout<<"value sum by reference function is: "<<a+b<<std::endl;
}; 



//definition of the function
void strFunc(const std::string& input1,const std::string& input2,std::string &output){

if(input1<input2){
output=input1;
} 
else
{
output=input2;
}
};

//defining the pointer function

void ptrFunc(const std::string*ptr1, const std::string*ptr2,std::string*ptr3){


    if(*ptr1<*ptr2)
    *ptr3=*ptr1;
    else
    *ptr3=*ptr2;

};



//definition of overloaded fuction

int max(int a,int b){
    int result;
    if (a>b)
    result=a;
    else
    result=b;
    std::cout<<" the grreater integer from "<<a<<" and "<<b<<" is: ";
    return result;
};

double max(double a,double b){

    double result;
    if(a>b)
    result=a;
    else
    result=b;
    std::cout<<"the greater double from "<<a<<" and "<<b<<" is" ;
    return result;
};

std::string max(std::string str1,std::string str2){

    std::string resStr;
    if(str1>str2)
    resStr=str1;
    else
    resStr=str2;

    std::cout<<"the max string from "<<str1<<" and "<<str2<<" is ";
    return resStr;




};


//tempelate funcion definition

template<typename k> const k& add( const k& a,const k& b){


    std::cout<<" sum is: "<<a+b<<std::endl;
    std::cout<<" the address of a is "<<&a<<std::endl;

};

*/ 

//concepts
  