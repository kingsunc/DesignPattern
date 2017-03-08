#include "ConcretePrototypeA.h"

ConcretePrototypeA::ConcretePrototypeA()
{
	cout << "ConcretePrototypeA create\n";
}

ConcretePrototypeA::ConcretePrototypeA(double dA, double dB)
{
	cout << "ConcretePrototypeA create\n";
	m_dA = dA;
	m_dB = dB;
}

ConcretePrototypeA::ConcretePrototypeA(const ConcretePrototypeA& obj)
{
	cout << "ConcretePrototypeA copy\n";
	m_dA = obj.m_dA;
	m_dB = obj.m_dB;
}

ConcretePrototypeA::~ConcretePrototypeA()
{
	cout << "ConcretePrototypeA delete\n";
}

ConcretePrototypeA* ConcretePrototypeA::Clone()
{
	return new ConcretePrototypeA(*this);
}

void ConcretePrototypeA::Show()
{
	cout << m_dA << " * " << m_dB << " = " << m_dA * m_dB << endl;
}