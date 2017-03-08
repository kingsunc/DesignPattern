#pragma once
#include "Prototype.h"

// æﬂÃÂ¿‡B;
class ConcretePrototypeB : public CPrototype
{
public:
	ConcretePrototypeB();
	ConcretePrototypeB(string strA, string strB);
	~ConcretePrototypeB();

	ConcretePrototypeB(const ConcretePrototypeB& obj);

	virtual ConcretePrototypeB* Clone();

	virtual void Show();

private:
	string		m_strA;
	string		m_strB;
};
