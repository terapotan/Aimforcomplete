#pragma once
#include "showThings.h"

#define MOVE_RIGHT 2
#define MOVE_LEFT 1

class bar : public showThings
{
private:
	int barx;
	int barImageHandle;
public:
	bar();
	bar(int barx);
	virtual bool show() override;
	void move(char moveNum);
	int getPointX();
	virtual ~bar();
};

