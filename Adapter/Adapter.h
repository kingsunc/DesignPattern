#pragma once
#include "Target.h"
#include "Adaptee.h"

// ������ ʹ����̳�������;
//#define ADAPTER_CLASS	

#ifndef ADAPTER_CLASS
// ����������;
class CAdapter: public CTarget
{
public:
	CAdapter();
	virtual ~CAdapter();

	virtual void Requst();

private:
	CAdaptee	m_Adaptee;
};
#else
// ��������;
class CAdapter : public CTarget, public CAdaptee
{
public:
	CAdapter();
	~CAdapter();

	virtual void Requst();
};
#endif