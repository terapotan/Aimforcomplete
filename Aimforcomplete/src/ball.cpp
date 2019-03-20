#include "ball.h"
#include "drawingLib.h"

ball::ball()
{
}

bool ball::show()
{
	std::unique_ptr<drawingLib> drawp(new drawingLib());
	drawp->drawPicture(LoadGraph("./resource/test_ball.png"),0,0);

	return true;
}



ball::~ball()
{
}

