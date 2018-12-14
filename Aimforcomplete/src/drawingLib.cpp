#include "drawingLib.h"


drawingLib::drawingLib()
{
}


drawingLib::~drawingLib()
{
}

void drawingLib::drawPicture(std::string fileName) {
#ifndef UNITTESTMODE_ENABLE

	int Handle; 
	Handle = LoadGraph(fileName.c_str()); 
	DrawGraph(50, 100, Handle, TRUE); 
#endif
}