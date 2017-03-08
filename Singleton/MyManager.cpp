#include "MyManager.h"

CMyManager* CMyManager::m_pInstance = NULL;
CMyLock CMyManager::m_myLock;

CMyManager::CMyManager(void)
{
	cout << "Create CMyManager::m_pInstance" << endl;
}

CMyManager::~CMyManager(void)
{
	cout << "Delete CMyManager::m_pInstance" << endl;
}

CMyManager* CMyManager::GetInstance()
{
	// Ë«ÖØÅÐ¶Ï;
	if (NULL == m_pInstance)
	{
		m_myLock.Lock();
		if (NULL == m_pInstance)
		{
			m_pInstance = new CMyManager();
		}
		m_myLock.UnLock();
	}
	return m_pInstance;
}

void CMyManager::ReleaseInstance()
{
	if (NULL != m_pInstance)
	{
		m_myLock.Lock();
		if (NULL != m_pInstance)
		{
			delete m_pInstance;
			m_pInstance = NULL;
		}
		m_myLock.UnLock();
	}
}