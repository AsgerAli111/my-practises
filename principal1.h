#ifndef principal
#define principal
#include "teacher1.h"

class Principal :public Teacher{

public:
std::string principalName{"no principal name available"};
std::string principalId{"default principal Id"};
Principal(std::string pName,std::string pId);
Principal()=default;

std::string getPrincipalName();
std::string getPrincipalId();

friend std::ostream& operator<<(std::ostream&,Principal &principalobj);

};





#endif
