#include "Adapter.h"


CAdapter::CAdapter()
{
}


CAdapter::~CAdapter()
{
}

#ifndef ADAPTER_CLASS
void CAdapter::Requst()
{
	cout << "¶ÔÏóÊÊÅäÆ÷" << endl;
	m_Adaptee.SpecificRequest();
}
#else
void CAdapter::Requst()
{
	cout << "ÀàÊÊÅäÆ÷" << endl;
	CAdaptee::SpecificRequest();
}
#endif