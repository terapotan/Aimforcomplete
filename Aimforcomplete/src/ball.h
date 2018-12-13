#pragma once
#include "showThings.h"

class ball : public showThings
{
public:
	ball();
	virtual bool show() override;
	virtual ~ball();
};

