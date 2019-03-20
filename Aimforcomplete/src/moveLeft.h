#pragma once
#include "moveKind.h"

class moveLeft :
	public moveKind
{
public:
	moveLeft();
	~moveLeft();
	int move(int barx) override;
};

