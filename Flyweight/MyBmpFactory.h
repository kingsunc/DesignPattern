#pragma once
#include "MyBmp.h"
#include <map>
typedef map<string, CMyBmp*> MapMyBmp;

class CMyBmpFactory
{
private:
	CMyBmpFactory();
	~CMyBmpFactory();

public:
	static CMyBmpFactory* GetInstance();
	static void ReleaseInstance();

	CMyBmp* GetMyBmp(string strPath);

private:
	static CMyBmpFactory*	m_pInstance;
	MapMyBmp		m_mapMyBmp;
};

#define AfxGetBmpFactory		CMyBmpFactory::GetInstance