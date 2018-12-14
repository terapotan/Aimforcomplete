#include "showThings.h"
#include "ball.h"
#include "bar.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}
	




	//test:バーの画像が表示される。
	showThings* barp = new bar();
	barp->show();
	//test:end

	//test:ボールの画像が表示される。
	showThings* st = new ball();
	st->show();
	//test:end


	WaitKey();				// キー入力待ち

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}
