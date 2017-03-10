#pragma once
#include "Target.h"
#include "Adaptee.h"

#define ADAPTER_CLASS		0

#ifndef ADAPTER_CLASS
// ∂‘œÛ  ≈‰∆˜;
class CAdapter: public CTarget
{
public:
	CAdapter(void);
	~CAdapter(void);

	virtual void Requst();

private:
	CAdaptee	m_Adaptee;
};
#else
// ¿‡  ≈‰∆˜;
class CAdapter : public CTarget, public CAdaptee
{
public:
	CAdapter(void);
	~CAdapter(void);

	virtual void Requst();
};
#endif