#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include <windows.h>

class AbstractProductA
{
public:
	AbstractProductA(){};
	virtual ~AbstractProductA(){};
};

class ConcreateProductA1 : public AbstractProductA
{
public:
	ConcreateProductA1();
	virtual ~ConcreateProductA1();
};

class ConcreateProductA2 : public AbstractProductA
{
public:
	ConcreateProductA2();
	virtual ~ConcreateProductA2();
};

class AbstractProductB
{
public:
	AbstractProductB(){};
	virtual ~AbstractProductB(){};
};

class ConcreateProductB1 : public AbstractProductB
{
public:
	ConcreateProductB1();
	virtual ~ConcreateProductB1();
};

class ConcreateProductB2 : public AbstractProductB
{
public:
	ConcreateProductB2();
	virtual ~ConcreateProductB2();
};

class AbstractFactory
{
public:
	AbstractFactory(){};
	virtual ~AbstractFactory(){};

	virtual AbstractProductA* CreateProductA() = 0;
	void ReleaseProductA(AbstractProductA* pProductA)
	{
		delete pProductA;
		pProductA = NULL;
	}

	virtual AbstractProductB* CreateProductB() = 0;
	void ReleaseProductB(AbstractProductB* pProductB)
	{
		delete pProductB;
		pProductB = NULL;
	}
};

class ConcreateFactory1 : public AbstractFactory
{
public:
	ConcreateFactory1();
	virtual ~ConcreateFactory1();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

class ConcreateFactory2 : public AbstractFactory 
{
public:
	ConcreateFactory2();
	virtual ~ConcreateFactory2();

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

#endif