#pragma once
#include "Human.h"

class CYellowHuman: public CHuman
{
public:
	CYellowHuman();
	virtual ~CYellowHuman();

public:
	virtual void ShowSkin();
	virtual void Talk();
};