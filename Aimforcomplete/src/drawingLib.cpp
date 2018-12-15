#include "drawingLib.h"


drawingLib::drawingLib()
{
}


drawingLib::~drawingLib()
{
}

void drawingLib::drawPicture(std::string fileName,int pointX,int pointY) {
#ifndef UNITTESTMODE_ENABLE
	int Handle; 
	Handle = LoadGraph(fileName.c_str()); 
	DrawGraph(pointX,pointY, Handle, TRUE); 
#endif
}