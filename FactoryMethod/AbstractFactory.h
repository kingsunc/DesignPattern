#pragma once
#include "Human.h"

// 抽象工厂类;
class CAbstractFactory
{
public:
	CAbstractFactory();
	virtual ~CAbstractFactory();

	virtual CHuman* CreateHuman(std::string strHumanType) = 0;
};