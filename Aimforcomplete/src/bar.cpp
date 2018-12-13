#include "bar.h"


bar::bar()
{
}

bar::bar(int barx){
	this->barx = barx;
}

bool bar::show()
{
	return true;
}

void bar::moveRight(){
	barx = barx + 1;
}
void bar::moveLeft() {
	barx = barx - 1;
}

int bar::getPointX()
{
	return barx;
}

bar::~bar()
{
}
