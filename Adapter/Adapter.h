#pragma once
#include "Target.h"
#include "Adaptee.h"

// 若定义 使用类继承适配器;
//#define ADAPTER_CLASS	

#ifndef ADAPTER_CLASS
// 对象适配器;
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
// 类适配器;
class CAdapter : public CTarget, public CAdaptee
{
public:
	CAdapter();
	~CAdapter();

	virtual void Requst();
};
#endif