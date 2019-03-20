#pragma once
#include "moveKind.h"
class moveRight :
	public moveKind
{
public:
	moveRight();
	~moveRight();
	int move(int barx) override;
};

