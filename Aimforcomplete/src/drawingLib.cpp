#include "drawingLib.h"
#include "settings.h"


drawingLib::drawingLib()
{
}


drawingLib::~drawingLib()
{
}

void drawingLib::drawPicture(int imageHandle,int pointX,int pointY) {
#ifndef UNITTESTMODE_ENABLE
	DrawGraph(pointX,pointY, imageHandle, TRUE); 
#endif
}