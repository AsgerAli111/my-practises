//# my-practises
//all the codes that i practiced at home
#include<iostream>
#include<iomanip>//for 10
#include<limits>//for11
#include<cmath>//for line 12
using namespace std;
int main()

{


/*



float a= 3.00345678455756775f;
double g= 300.0000000000000004567871234567890;
 long double c=1.2345678910111214131516161718;
//float c;
//double  d;
//short e;

cout<<"the  value of float .00345678455756775; is  "<<sizeof(a)<<"and the value is  "<<a<<endl;
cout<<" the value of double  "<<sizeof(g)<<" and the value is "<<g<<endl;
cout<<"the value long of double   is 00.0000000000000004567871234567890;"<<sizeof(c)<<"and the value is "<<c<<endl;


//cout<<"the value of double double is "<<sizeof(d)<<endl;
//cout<<"the value of short "<< sizeof(e)<<endl;



float a= 134567890123456789.0f;
double b=1345678901234567890;
long double c=13456789012345678e9;

cout<<"the size of float a is "<<sizeof(a)<<endl;
cout<<"the size of double b is "<<sizeof(b)<<endl;
cout<<"the size of long double is "<<sizeof(c)<<endl;
cout<<"-----------------------"<<endl;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
cout<<"the value of c is "<<c<<endl;
cout<<"EXITED WITH ZERO ERROS CODE STATUS -------------";


double number1{-5.6};
double number2{};
double number3{};
double result(number1/number2);
cout<<"the number1/number2 "<<number1/number2<<" yields "<<result<<endl; 
cout<<result <<" + "<<number1<<"yields"<<result+number1<<endl;
result=number2/number3;
cout<<"the division of  "<<number2<<" / "<<number3<<" is "<<result<<endl;
//this programme is also successful
//this is over here
//----------------------------------------------------------------------------------------------01-------------------------------------------


int sel1,sel2;
cout<<"enter selection"<<endl;
cin>>sel1>>sel2;
bool red_light{sel1};
bool green_light {sel2}; //seletion section
if (red_light==true)
{
     cout<<"the red light is active you can not pass through this line"<<endl;
}     else
     {
        cout<<"the red light is off you can pass through this line"<<endl;
     }

        if ( green_light==true)
        {
            cout<<"the light is green you can passs the road"<<endl;
        }
            else 
            {
                cout<<"the light is off don't cross the line"<<endl;
            }
        cout<<boolalpha;
        cout<<"the light status for red light is  "<<red_light<<endl<<" and for green light is   " <<green_light<<"---------------";
        cout<<"the size of boolean is  "<<endl<<sizeof(red_light);
        //.........THE PROG 2 OVER HERE FOR BOOLEAN--------------------------------------------02---------------------------------


  
    
    char character1 {65};
    char character2 {'s'};
    char character3 {'g'};
    char character4{'e'};
    char character5{'r'};
    cout<<character1<<character2<<character3<<character4<<character5<<endl;
    cout<<"the casting value  "<<static_cast<int>(character1);

//-------------------------CHARACTER PROGRAME OVER HERE--------------03---------------------------------------


auto var1=35;
auto variable2{36.5};
auto var3(4.544440l);// all these are mix of different types of variables and the auto keyword determines the data type it self.
auto var4{true};

cout<<"checking the result of compiler weather it selected right of not:"<<endl;
cout<<"the size of var1(35) is: "<<sizeof(var1)<< endl;
cout<<"the size of var2 (36.5) is: "<<sizeof(variable2)<<endl;
cout<<"the size of var3 (45.4444) is: "<<sizeof(var3)<<endl;
cout<<"the size of var4 (true is: "<<sizeof(var4)<<endl;
cout<<"the user has to verify wit bytes of memory used";

//-----------------------------------------auto type over-----------------------04-------------------------------------------


//ASSIGNING THE VALUES
    int var1{34};
    auto var{3456u};//here (if)i set it as unsigned so it will show garbare as i assigned signed value to it below;
    //assignment
    cout<<"the value of var1 int before assigned is: "<<var1<<endl;
    cout<<"the value of auto var before assigned is: "<<var<<endl;
    var1=35;
    var=3457;
    cout<<"the value (34) after assigning is: "<<var1<<endl;
    cout<<"the value (3456) after assigning is : " <<var<<endl;
    //---------------------------------assignment over--------------------------------05---------------------------------------

    
//precidence and associativity
int a=2,b=2,c=2,d=2,e=2;
int print;
int p=d/2;//to see the division
print= (a+b)*(c-d)/e;
cout<<"the answer of full operation is: "<<endl<<print;
    cout<<p;

//------------------------------------PRECIDENCE OVER----------------------------06------------------------------------

//--------------------------------------INCREMENT/DECREMENT-------------------07--------------------------------------

int val={10};

cout<<"the value before increment is: "<< val<<endl;
val *=2;//compact way

cout<<"the value after increment is: "<<val<<endl;
val=10;//set to default
val /=5;
cout<<"the value after decrement is : "<<val<<endl;
cout<<"current value is: " <<val; 



//------------------------------inc/dec over------------------------08------------------------------------------------------------
//-----------------------relational operator----------------------------------------------------------------------------------- 
int number1{10};
int number2{20};
cout<<"the value of number1 is: "<<number1<<" AND NUMBER2 IS: "<<number2<<endl;
cout<<boolalpha;
cout<<(number1>number2)<<endl;
cout<<(number1<number2)<<endl;
cout<<(number1<=number2)<<endl;
cout<<(number1>=number2)<<endl;
cout<<(number1!=number2)<<endl;
cout<<(number1==number2)<<endl;
//cout<<noboolapha;
cout<<(number1==number2)<<endl;
 bool min=(23<25);
cout<<"the variable check, 25>23: "<<min;

//------------------------------logical operators-----------------------------------08-----------------------------------------------


 
 int st1,st2,st3;

//taking the state from user

cout<<"NOTE: while entering state use only binary"<<endl;
cout<<"enter the state1: "<<endl;
cin>>st1;
cout<<"enter the state2: "<<endl;
cin>>st2;
cout<<"enter the state3: "<<endl;
cin>>st3;
bool state1{st1};
bool state2{st2};
bool state3 {st3};


//using logical sperators

cout<<"-----------------------------------------------------"<<endl;
cout<<boolalpha;
cout<<" the AND operation: "<<(state1&&state2)<<endl;
bool result=(state1||state2);
cout<<"the OR operation: "<<result;
cout<<"NOT operator: "<<(!state1&&state2)<<endl;


int num1=23,num2=34,num3=56;
cout<<"the value of number1 is :23 and number2 is:34 ans number3 is:56"<<endl;
cout<<boolalpha;
cout<<"using relational and logical operators together:______________"<<endl;
bool result1=(num1>num2)&&(num2<num3);
cout<<"if num1 is greater than num2 and num2 is less than num3: "<<result1<<endl;
bool result2=(num1>num2||num2<num3);
cout<<"if num1 is greater than num2 or num2 is less than num3: "<<result2<<endl;
bool result3{true};

//--------------------------------------logical operator over----------------------------------------------------------



//----------------------------------I/O MANIPULATORAS-------------------------10------------------------------------------------------------

cout<<"the output without formats"<<endl;
cout<<"NAME     AGE        MOBILE       "<<endl;
cout<<"asgerali     18     8874383628"<<endl;
cout<<"doing same with formats "<<endl;
cout<<right;
cout<<setfill('_');
cout<<setw(10)<<"NAME"<<setw(10)<<"AGE"<<setw(20)<<"MOBILE\n";
cout<<setw(10)<<"asger "<<setw(10)<<" 19 "<<setw(20)<<"8874383628\n";

bool a{true};
cout<<boolalpha;
cout<<a<<endl;
cout<<noboolalpha;
cout<<a<<endl;

double number{72.0};
cout<<uppercase;
cout<<showpos;
cout<<hex<<number;
cout<<setprecision(4);
cout<<noshowpoint;
cout<<number;

//MAKING A CONVERTOR.
auto entered_number{1};
int result_type;
cout<<"thanks for using our convertor"<<endl<<endl;
cout<<"ENTER THE NUMBER YOU WANT TO CONVERT: "<<endl;
cin>>entered_number;
cout<<"RESULT TYPE, 2 FOR DECIMAL,8 FOR OCTAL 16 FOR HEXADECIMAL :"<<endl;
cin>>result_type;
cout<<"_________________________________________________________________________________________________"<<endl<<endl;
if(result_type==2)
{
    cout<<"the conversion of "<<entered_number<<" into decimal is: "<<dec<<entered_number<<endl;

}
else if (result_type==8)
{
    cout<<"the conversion of "<<entered_number <<" into octal is: " <<oct<<entered_number<<endl;
}
    else
    {
        cout<<"the conversion of "<< entered_number<<" into hexadecimal is: "<<hex<<entered_number; 
        
        
    }



//-------------------------------------------------------------------11---------------limits---------------------------------------------------

cout<<"printing the numeric limits \n"<<"the minimum numeric limit is"<<::numeric_limits<short>::min()<<endl<<"and the max numeric limit is "<<::numeric_limits<short>::max()<<endl;
cout<<"the numeric limit for double (min) for long is: "<<::numeric_limits<double>::min()<<endl<<"and the max is: "<<::numeric_limits<double>::max();
cout<<boolalpha;
cout<<endl<<"the numeric representation :" <<::numeric_limits<short>::is_signed;
cout<<endl<<"the digits representation  "<<::numeric_limits<short>::digits; 


//---------------------------------------------------------------------------------12-------------maths fns------------------------------------

float num{57.7};
int num1{-5000};

cout<<"the ceil round off is: "<<ceil(num)<<endl;
cout<<"the floor round off is: "<<floor(num)<<endl;
cout<<"the absolute calue of 5k is "<<abs(num1)<<endl;
cout<<"the exponential of 10 is " <<exp(10)<<endl;
cout<<"the log 2 of base 2 is: "<<log(54.59)<<endl;
cout<<"rounding 57.7 goes as:--> "<<round(num)<<endl;


//---------------------------------------------------------------------------------13------------weird types------------------------------------

short int var1{4};
short int var2{5};

char var3{90};
char var4 {85};

cout<<"the size of var1 is: "<<sizeof(var1)<<" bytes \n";
cout<<"the size of var2 is: "<<sizeof(var2)<<" bytes\n";
cout<<"the size of var3 is: "<<sizeof(var3)<<" bytes\n";
cout<<"the size of var4 is: "<<sizeof(var4)<<" bytes\n";
auto result1=var1+var2;
auto result2=var3+var4;
cout<<"the size of result 1 is: "<<sizeof(result1)<<" and the size of result 2 is: "<<sizeof(result2)<<" bytes"<<endl;


//--------------------------------------------------------------------chapter over here-------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------


int green_state;

bool red_light{false};
bool police_light{false};
bool green_light{green_state};


if(red_light==true||police_light==true)
     {

        green_state=0;
     }

    else
    {
       green_state=1;
    }

    if(green_state==1)    {
        cout<<"you can pass the road"<<endl;
    }
    else
    {
        cout<<"WAIT UNTILL POLICE OR RED LIGHT GOES TO OFF STATE"<<endl;
    }



//------------------------------------------------------------------------13------------------switch case-----------------------------

 int number1{10};
 int number2 {20};
 int number3{30};
 int number4{40};


int operation{0};
int ans;
cout<<"enter the operation you want to perform: \n"<<endl;
cin>>operation;

switch (operation)
{

case 1 :
{
    ans=number1+number2+number3+number4;
    cout<<showpos;
    cout<<"the addition is: "<<setw(1)<<ans<<endl;
    break;
}

case 2 :
{
    cout<<"subtraction is:  "<<number1-number2<<endl;
    break;


}
case 3:
{
    cout<<"the multiplication is:  "<<number1*number2*number3*number4<<endl;
    break;
}
case 4:
{
    cout<<showpos<<"the division is:  "<<number1/number2<<endl;
    break;

}
 
  default :
 {
    cout<<"the default is running"<<endl;
    break;
 }
}




//------------------------------------switch programm over-------------------------------------------------------------------------------
//----------------------------------------------------ternary operator-------------14-----------------------------------------------
int a=20,b=34;
int result=(a>b) ? a:b;
cout<<result;
//---------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------LOOPS ------------------------------15-----------------------------------



int i=0;
int stop{11};

for(;i<stop;i++)
{
    cout<<"the value of i is: "<<i<<endl;
    i=i+1;
    }

do
{
    cout<<i<<endl;
    i=i+1;
}
while(i<stop+11);
 



int collection[]{2,2,2,2,2},sum=0;


for (int i=0;i<5;++i)
{
sum=sum+collection[i];
   


}
cout<<sum <<endl;
cout<<sizeof (collection);



char message1[] {'h','e','l','l','o','\0'};
char message2 []{'h','e','l','l','o','\0'};
char message3 [] {"hello"};
char message4[]{ "hello world! "};
message2[1] ='a';
cout<<message2;





////////////////////////////////////pointers/////////////////////////////////////////16/////////////////////////////////////

int a=34;
int* ptr1{&a};
int** ptr2=&ptr1;
cout<<sizeof(ptr1)<<endl<<ptr1<<"\n"<<ptr2<<endl;

int int_data{56};
int* pointer{&int_data};
cout<<"the data accessing through pointer is: "<<*pointer<<endl;



const char*  char_data { "hello world! "};
//const char* pointer_data{&char_data};
//cout<<char_data;
const char** poi2{&char_data};
cout<<*poi2;
*/
 ///////////////////////////////////////////////////////////////////////////////////////////17///////////////////////////////
 //new practise begins here
