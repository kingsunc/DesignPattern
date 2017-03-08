#pragma once
#include "Human.h"

class CBlackHuman: public CHuman
{
public:
	CBlackHuman();
	virtual ~CBlackHuman();

public:
	virtual void ShowSkin();
	virtual void Talk();
};