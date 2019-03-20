#include "bar.h"
#include "drawingLib.h"



bar::bar()
{
	barImageHandle = LoadGraph("./resource/test_bar.png");
}

bar::bar(int barx){
	barImageHandle = LoadGraph("./resource/test_bar.png");
	this->barx = barx;
}




void bar::move(char moveNum)
{
	if (moveNum == 1) {
		barx -= 2;
	}
	else if (moveNum == 2) {
		barx += 2;
	}
}

int bar::getPointX()
{
	return barx;
}

bool bar::show() {
	std::unique_ptr<drawingLib> drawp(new drawingLib());
	drawp->drawPicture(barImageHandle, barx, 400);
	return true;
}




bar::~bar()
{
}
