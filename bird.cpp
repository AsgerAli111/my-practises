#include "bird.h"

Bird::Bird(std::string color,std::string description):Animal(description),m_color(color){}
Bird::~Bird(){};