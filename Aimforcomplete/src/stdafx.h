// stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
// 参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
// を記述します。
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーから使用されていない部分を除外します。
//#define UNITTESTMODE_ENABLE			
/*
#define UNITTESTMODE_ENABLE

#ifndef UNITITESTMODE_ENABLE
int ret;
ret = LoadGraph("./Image/ball.png");
#endif

次のようにすると#ifndef--#endifの部分は単体テストで実行されません。
Aimforcompleteプロジェクト側で実行する場合は、#define UNITTESTMODE_ENABLEの行をコメントアウトしてください。
*/

// Windows ヘッダー ファイル:
#include <windows.h>

// C ランタイム ヘッダー ファイル
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// TODO: プログラムに必要な追加ヘッダーをここで参照してください
#include "DxLib.h"
#include <memory>