#include "block.h"


block::block()
{
}

bool block::show()
{
#ifndef UNITTESTMODE_ENABLE

	int Handle;     // �f�[�^�n���h���i�[�p�ϐ�
	Handle = LoadGraph("./resource/test_block.png"); // �摜�����[�h
	if (Handle == -1) {
		exit(0);
	}
	DrawGraph(50, 100, Handle, TRUE); // �f�[�^�n���h�����g���ĉ摜��`��
	ScreenFlip();
#endif
	return true;
}



block::~block()
{
}
