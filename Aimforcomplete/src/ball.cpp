#include "ball.h"
#include "drawingLib.h"
#include "settings.h"

ball::ball()
{
}

bool ball::show()
{
#ifndef UNITTESTMODE_ENABLE
	std::unique_ptr<drawingLib> drawp(new drawingLib());
	drawp->drawPicture(LoadGraph("./resource/test_ball.png"),0,0);
#endif


	return true;
}



ball::~ball()
{
}

