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

	int Handle;     // �f�[�^�n���h���i�[�p�ϐ�
	Handle = LoadGraph("./resource/test_bar.png"); // �摜�����[�h
	if (Handle == -1) {
		exit(0);
	}
	DrawGraph(50, 100, Handle, TRUE); // �f�[�^�n���h�����g���ĉ摜��`��
	ScreenFlip();
#endif
	return true;
}




bar::~bar()
{
}
