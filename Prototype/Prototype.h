#pragma once
#include <iostream>

using namespace std;;

// ����ģ����;
class CPrototype
{
public:
	CPrototype();
	virtual ~CPrototype();

	CPrototype(const CPrototype& obj);

	virtual CPrototype* Clone() = 0;
	virtual void Release();

	virtual void Show() = 0;
};