#include "Adapter.h"


CAdapter::CAdapter(void)
{
}


CAdapter::~CAdapter(void)
{
}

#ifndef ADAPTER_CLASS
void CAdapter::Requst()
{
	cout << "����������" << endl;
	m_Adaptee.SpecificRequest();
}
#else
void CAdapter::Requst()
{
	cout << "��������" << endl;
	CAdaptee::SpecificRequest();
}
#endif