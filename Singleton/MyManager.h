#pragma once

#include <iostream>
#include "MyLock.h"

using namespace std;

// ������(��һ�޶���);
class CMyManager
{
private:
	// ����˽�У��������ⲿʵ����;
	CMyManager();
	virtual ~CMyManager();

public:
	static CMyManager * GetInstance();
	static void ReleaseInstance();

	static CMyManager*	m_pInstance;		// ��һʵ��;
	static CMyLock		m_myLock;			// ������;
};