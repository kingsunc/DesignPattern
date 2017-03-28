#pragma once
#include <vector>
#include "MyCommand.h"

typedef std::vector<CMyCommand*>	MyCmdList;

// 遍历请求命令;
class CInvoker
{
public:
	CInvoker();
	virtual ~CInvoker();

	// 涉及多线程时,需要加锁;
	void AddMyCmd(CMyCommand* pMyCmd);

	void Notify();

protected:
	MyCmdList	m_listCmd;
};