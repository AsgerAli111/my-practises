

class Circle{


    int base{34};
    int height{36};

    public:

    double circleArea();


    int get(){

        return height;
    };

    void set(int a){


        height=a;
    }



Circle(int c,int b){

    std::cout<<"constructor called"<<std::endl;
    std::cout<<"sum by constructor is: "<<c+b<<std::endl;
};

~Circle(){
    std::cout<<"objects destroyed successfully\n";
}

Circle()=default;



};

