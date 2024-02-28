#ifndef teacher
#define teacher
#include "student1.h"

class Teacher:public Student{

    public:
    Teacher();
    Teacher(std::string tName,int tId);

    std::string getTName();
    int getTId();
    void setTName(std::string);
    void setTId(int );
    friend std::ostream& operator <<(std::ostream&,Teacher &teacherobj);
    protected:
    std::string teacherName{"default teacher name"};
    private:
    int teacherId{00};

    
};
#endif