#include "showThings.h"
#include "ball.h"
#include "bar.h"
#include "block.h"
#include "userInKey.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}
	




	////test:バーの画像が表示される。
	//showThings* barp = new bar(0);
	//barp->show();
	////test:end

	////test:ボールの画像が表示される。
	//showThings* st = new ball();
	//st->show();
	////test:end

	////test:ブロックの画像が表示される
	//showThings* blockp = new block();
	//blockp->show();
	////test:end


	////test:バーが指定した座標に移動する
	//std::unique_ptr <showThings> moveBar(new bar(100));
	//moveBar->show();
	////test:end

	//test:aキーを打つと左に、sキーを押すと右に動く。
	std::unique_ptr <userInKey> userp(new userInKey());
	std::unique_ptr <bar> barp(new bar(0));
	barp->show();
	char* userInKeyData = new char[256];
	
	while (ProcessMessage() == 0) {
		userp->getUserHitKey(userInKeyData);
		if (userInKeyData[KEY_INPUT_A] == 1) {
			barp->moveLeft();
			barp->show();
		}else if (userInKeyData[KEY_INPUT_S] == 1) {
			barp->moveRight();
			barp->show();
		}
	}
	//test:end



	WaitKey();				// キー入力待ち

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}
