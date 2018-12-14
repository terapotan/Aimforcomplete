#include "bar.h"


bar::bar()
{
}

bar::bar(int barx){
	this->barx = barx;
}

void bar::moveRight(){
	barx = barx + 1;
}
void bar::moveLeft() {
	barx = barx - 1;
}

int bar::getPointX()
{
	return barx;
}

bool bar::show() {
#ifndef UNITTESTMODE_ENABLE

	int Handle;     // データハンドル格納用変数
	Handle = LoadGraph("./resource/test_bar.png"); // 画像をロード
	if (Handle == -1) {
		exit(0);
	}
	DrawGraph(50, 100, Handle, TRUE); // データハンドルを使って画像を描画
	ScreenFlip();
#endif
	return true;
}




bar::~bar()
{
}
