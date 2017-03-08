#pragma once
#include "Prototype.h"

// æﬂÃÂ¿‡A;
class ConcretePrototypeA : public CPrototype
{
public:
	ConcretePrototypeA();
	ConcretePrototypeA(double dA, double dB);
	~ConcretePrototypeA();

	ConcretePrototypeA(const ConcretePrototypeA& obj);

	virtual ConcretePrototypeA* Clone();

	virtual void Show();

private:
	double		m_dA;
	double		m_dB;
};

