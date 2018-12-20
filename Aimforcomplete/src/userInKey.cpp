#include "userInKey.h"


userInKey::userInKey()
{
}

void userInKey::getUserHitKey(char* recKeyData){
	recKeyData[0x1E] = 1;
}


userInKey::~userInKey()
{
}
