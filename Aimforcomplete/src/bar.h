#pragma once
#include "showThings.h"

class bar : public showThings
{
private:
	int barx;
public:
	bar();
	bar(int barx);
	bool show() override;
	void moveRight();
	void moveLeft();
	int getPointX();
	virtual ~bar();
};

