#pragma once
#include <vector>
#include "MyCommand.h"

typedef std::vector<CMyCommand*>	MyCmdList;

// ������������;
class CInvoker
{
public:
	CInvoker();
	virtual ~CInvoker();

	// �漰���߳�ʱ,��Ҫ����;
	void AddMyCmd(CMyCommand* pMyCmd);

	void Notify();

protected:
	MyCmdList	m_listCmd;
};