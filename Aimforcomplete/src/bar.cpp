#include "bar.h"
#include "drawingLib.h"
#include "settings.h"



bar::bar()
{
#ifndef UNITTESTMODE_ENABLE
	barImageHandle = LoadGraph("./resource/test_bar.png");
#endif
}

bar::bar(int barx){
#ifndef UNITTESTMODE_ENABLE
	barImageHandle = LoadGraph("./resource/test_bar.png");
#endif
	this->barx = barx;
}

void bar::moveRight(){
	barx = barx + 2;
}
void bar::moveLeft() {
	barx = barx - 2;
}

//moveNum=1�̎��AmoveLeft�֐����Ăяo�����B
//moveNum=2�̎��AmoveRight�֐����Ăяo�����B
void bar::move(char moveNum)
{
	if (moveNum == 1) {
		moveLeft();
	}
	else if (moveNum == 2) {
		moveRight();
	}
}

int bar::getPointX()
{
	return barx;
}

bool bar::show() {
#ifndef UNITTESTMODE_ENABLE
	std::unique_ptr<drawingLib> drawp(new drawingLib());
	drawp->drawPicture(barImageHandle, barx, 400);
#endif
	return true;
}




bar::~bar()
{
}
