#pragma once
#include "Human.h"

// ���󹤳���;
class CAbstractFactory
{
public:
	CAbstractFactory();
	virtual ~CAbstractFactory();

	virtual CHuman* CreateHuman(std::string strHumanType) = 0;
};