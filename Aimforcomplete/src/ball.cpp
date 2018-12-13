#include "ball.h"


ball::ball()
{
}

bool ball::show()
{
	#ifndef UNITTESTMODE_ENABLE

	int Handle;     // データハンドル格納用変数
	Handle = LoadGraph("./resource/test_ball.png"); // 画像をロード
	if (Handle == -1) {
		exit(0);
	}
	DrawGraph(50, 100, Handle, TRUE); // データハンドルを使って画像を描画
	ScreenFlip();
#endif


	return true;
}



ball::~ball()
{
}

