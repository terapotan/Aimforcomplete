#include "bar.h"
#include "drawingLib.h"

bar::bar()
{
}

bar::bar(int barx){
	this->barx = barx;
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

bool bar::show() {
#ifndef UNITTESTMODE_ENABLE
	std::unique_ptr<drawingLib> drawp(new drawingLib());
	drawp->drawPicture("./resource/test_bar.png", barx, 0);
#endif
	return true;
}




bar::~bar()
{
}
