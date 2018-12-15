#include "ball.h"
#include "drawingLib.h"

ball::ball()
{
}

bool ball::show()
{
#ifndef UNITTESTMODE_ENABLE
	std::unique_ptr<drawingLib> drawp(new drawingLib());
	drawp->drawPicture("./resource/test_ball.png",0,0);
#endif


	return true;
}



ball::~ball()
{
}

