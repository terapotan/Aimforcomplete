#include "drawingLib.h"


drawingLib::drawingLib()
{
}


drawingLib::~drawingLib()
{
}

void drawingLib::drawPicture(int imageHandle,int pointX,int pointY) {
	DrawGraph(pointX,pointY, imageHandle, TRUE); 
}