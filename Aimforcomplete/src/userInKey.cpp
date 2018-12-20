#include "userInKey.h"
#include "DxLib.h"


userInKey::userInKey()
{
}

void userInKey::getUserHitKey(char* recKeyData){
#ifdef UNITTESTMODE_ENABLE
	recKeyData[0x1E] = 1;
#else
	GetHitKeyStateAll(recKeyData);
#endif

}


userInKey::~userInKey()
{
}
