#include "block.h"
#include "drawingLib.h"

block::block()
{
}

bool block::show()
{
	std::unique_ptr<drawingLib> drawp(new drawingLib());
	drawp->drawPicture(LoadGraph("./resource/test_block.png"),0,0);

	return true;
}



block::~block()
{
}
