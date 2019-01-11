#include "block.h"
#include "drawingLib.h"
#include "settings.h"

block::block()
{
}

bool block::show()
{
#ifndef UNITTESTMODE_ENABLE
	std::unique_ptr<drawingLib> drawp(new drawingLib());
	drawp->drawPicture(LoadGraph("./resource/test_block.png"),0,0);
#endif
	return true;
}



block::~block()
{
}
