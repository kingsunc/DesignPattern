#include "MyBmpFactory.h"

CMyBmpFactory* CMyBmpFactory::m_pInstance = new CMyBmpFactory();

CMyBmpFactory::CMyBmpFactory()
{
}


CMyBmpFactory::~CMyBmpFactory()
{
	for (MapMyBmp::iterator itBmp = m_mapMyBmp.begin(); itBmp != m_mapMyBmp.end(); itBmp++)
	{
		delete itBmp->second;
	}
	m_mapMyBmp.clear();
}

CMyBmpFactory* CMyBmpFactory::GetInstance()
{
	return m_pInstance;
}

void CMyBmpFactory::ReleaseInstance()
{
	delete m_pInstance;
}

CMyBmp* CMyBmpFactory::GetMyBmp(string strPath)
{
	MapMyBmp::iterator itBmp = m_mapMyBmp.find(strPath);
	if (itBmp != m_mapMyBmp.end())
	{
		return m_mapMyBmp[strPath];
	}

	CMyBmp* pBmp = new CMyBmp();
	if (NULL != pBmp)
	{
		if (pBmp->Load(strPath))
		{
			m_mapMyBmp[strPath] = pBmp;
			return pBmp;
		}
	}

	return NULL;
}