#pragma once
#include "AbstractFactory.h"

// ����ӹ���;
class CHumanFactory: public CAbstractFactory
{
public:
	CHumanFactory();
	virtual ~CHumanFactory();

	virtual CHuman* CreateHuman(std::string strHumanType);
};