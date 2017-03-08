#pragma once

#include <iostream>
#include "MyLock.h"

using namespace std;

// 管理类(独一无二的);
class CMyManager
{
private:
	// 构造私有，不允许外部实例化;
	CMyManager();
	virtual ~CMyManager();

public:
	static CMyManager * GetInstance();
	static void ReleaseInstance();

	static CMyManager*	m_pInstance;		// 单一实例;
	static CMyLock		m_myLock;			// 互斥锁;
};