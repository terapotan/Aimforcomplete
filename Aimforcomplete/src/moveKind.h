#pragma once
class moveKind
{
public:
	moveKind();
	virtual int move(int barx) = 0;
	virtual ~moveKind();
};

