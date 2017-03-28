#include "Invoker.h"

CInvoker::CInvoker()
{
}

CInvoker::~CInvoker()
{
}

void CInvoker::AddMyCmd(CMyCommand* pMyCmd)
{
	m_listCmd.push_back(pMyCmd);
}

void CInvoker::Notify()
{
	for (MyCmdList::iterator it = m_listCmd.begin(); it != m_listCmd.end(); ++it)
	{
		(*it)->ExecuteCmd();
	}
	m_listCmd.clear();
}