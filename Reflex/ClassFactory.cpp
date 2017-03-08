#include "ClassFactory.h"

CClassFactory* CClassFactory::m_pInstance = new CClassFactory();

CClassFactory::CClassFactory()
{
}

CClassFactory::~CClassFactory()
{
}

void* CClassFactory::CreateObject(string strClassName)
{
	MA_CTRATECLASS::iterator iter = m_mapClass.find(strClassName);
	if ( iter == m_mapClass.end())
	{
		return NULL;
	}
	else
	{
		return (void*) (iter->second());
	}
}

void CClassFactory::RegistControl(string strClassName, CreateClass pFunc)
{
	m_mapClass[strClassName] = pFunc;
	//m_mapControl.insert(MAP_DUI_CTRATECLASS::value_type(strClassName, pFunc));
}

CClassFactory* CClassFactory::GetInstance()  
{
	return m_pInstance;
}

void CClassFactory::ReleaseInstance()
{
	if (NULL != m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = NULL;
	}
}