#pragma once
#include "Receiver.h"

// ÃüÁî;
class CMyCommand
{
public:
	CMyCommand(CReceiver* pReceiver);
	virtual ~CMyCommand();

	virtual void ExecuteCmd() = 0;

protected:
	CReceiver*	m_pReceiver;
};

// ¿¾ÑòÈâÃüÁî;
class MakeMuttonCmd : public CMyCommand
{
public:
	MakeMuttonCmd(CReceiver* temp) : CMyCommand(temp) {}
	virtual void ExecuteCmd()
	{
		m_pReceiver->MakeMutton();
	}
};

// ¿¾¼¦³á°òÃüÁî;
class MakeChickenWingCmd : public CMyCommand
{
public:
	MakeChickenWingCmd(CReceiver* temp) : CMyCommand(temp) {}
	virtual void ExecuteCmd()
	{
		m_pReceiver->MakeChickenWing();
	}
};