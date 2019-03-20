#include "showThings.h"
#include "ball.h"
#include "bar.h"
#include "block.h"
#include "userInKey.h"
#include "moveRight.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}


	//test:aキーを打つと左に、sキーを押すと右に動く。
	std::unique_ptr <userInKey> userp(new userInKey());
	std::unique_ptr <bar> barp(new bar(200));
	barp->show();
	char* userInKeyData = new char[256];
	int eventList[2][2] = {
		{KEY_INPUT_A,MOVE_LEFT},
		{KEY_INPUT_S,MOVE_RIGHT},
	};

	SetDrawScreen(DX_SCREEN_BACK);
	std::shared_ptr<moveKind> mKind(new moveRight());

	while (ProcessMessage() == 0) {
		userp->getUserHitKey(userInKeyData);
		for (int row = 0; row < 2; row++) {
				if (userInKeyData[eventList[row][0]] == 1) {
					ClearDrawScreen();
					barp->move(mKind);
					barp->show();
				}
		}
		ScreenFlip();
	}
	//test:end



	WaitKey();				// キー入力待ち

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}
