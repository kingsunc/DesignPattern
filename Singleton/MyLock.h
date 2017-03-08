#pragma once
#include <windows.h>

class CMyLock
{
public:

	CMyLock()
	{
		::InitializeCriticalSection(&m_critSec);
	}
	virtual ~CMyLock()
	{
		::DeleteCriticalSection(&m_critSec);
	}

	void Lock()
	{
		::EnterCriticalSection(&m_critSec);
	}
	void UnLock()
	{
		::LeaveCriticalSection(&m_critSec);
	}

private:
	CRITICAL_SECTION	m_critSec;
};