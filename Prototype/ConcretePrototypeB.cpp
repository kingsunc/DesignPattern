#include "ConcretePrototypeB.h"

ConcretePrototypeB::ConcretePrototypeB()
{
	cout << "ConcretePrototypeB create\n";
}

ConcretePrototypeB::ConcretePrototypeB(string strA, string strB)
{
	cout << "ConcretePrototypeB create\n";
	m_strA = strA;
	m_strB = strB;
}

ConcretePrototypeB::ConcretePrototypeB(const ConcretePrototypeB& obj)
{
	cout << "ConcretePrototypeB copy\n";
	m_strA = obj.m_strA;
	m_strB = obj.m_strB;
}

ConcretePrototypeB::~ConcretePrototypeB()
{
	cout << "ConcretePrototypeB delete\n";
}

ConcretePrototypeB* ConcretePrototypeB::Clone()
{
	return new ConcretePrototypeB(*this);
}

void ConcretePrototypeB::Show()
{
	cout << m_strA.c_str() << " + " << m_strB.c_str() << " = " << (m_strA + m_strB).c_str() << endl;
}