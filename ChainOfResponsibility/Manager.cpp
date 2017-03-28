#include "Manager.h"


CManager::CManager(string strTemp)
{
	m_strName = strTemp;
}

void CManager::SetSuccessor(CManager* pTemp)
{
	m_pSuccessor = pTemp;
}

void CCommonManager::GetRequest(CRequest* pRequest)
{
	if (pRequest->m_nNumber >= 0 && pRequest->m_nNumber < 10)
	{
		cout << m_strName << " 处理了请求: " << pRequest->m_nNumber << endl;
	}
	else
	{
		m_pSuccessor->GetRequest(pRequest);
	}
}

void CMajordomo::GetRequest(CRequest* pRequest)
{
	if (pRequest->m_nNumber <= 100)
	{
		cout << m_strName << " 处理了请求: " << pRequest->m_nNumber << endl;
	}
	else
	{
		m_pSuccessor->GetRequest(pRequest);
	}
}

void GeneralManager::GetRequest(CRequest* pRequest)
{
	// 总经理可以处理所有请求;
	cout << m_strName << " 处理了请求: " << pRequest->m_nNumber << endl;
}