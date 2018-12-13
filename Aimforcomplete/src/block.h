#pragma once
#include "showThings.h"
class block : public showThings
{
public:
	block();
	virtual bool show() override;
	virtual ~block();
};

