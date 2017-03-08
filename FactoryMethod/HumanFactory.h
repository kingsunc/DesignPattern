#pragma once
#include "AbstractFactory.h"

// 人类加工厂;
class CHumanFactory: public CAbstractFactory
{
public:
	CHumanFactory();
	virtual ~CHumanFactory();

	virtual CHuman* CreateHuman(std::string strHumanType);
};