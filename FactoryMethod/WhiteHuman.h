#pragma once
#include "Human.h"

class CWhiteHuman: public CHuman
{
public:
	CWhiteHuman();
	virtual ~CWhiteHuman();

public:
	virtual void ShowSkin();
	virtual void Talk();
};