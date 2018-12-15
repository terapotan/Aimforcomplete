#pragma once
#define UNITTESTMODE_ENABLE			
/*
#define UNITTESTMODE_ENABLE

#ifndef UNITITESTMODE_ENABLE
int ret;
ret = LoadGraph("./Image/ball.png");
#endif

次のようにすると#ifndef--#endifの部分は単体テストで実行されません。
Aimforcompleteプロジェクト側で実行する場合は、#define UNITTESTMODE_ENABLEの行をコメントアウトしてください。
*/