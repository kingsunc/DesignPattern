#pragma once
#include <iostream>
using namespace std;

class Component
{
public:
	virtual void Operation() = 0;
};

// ��װ����;
class ConcreteComponent : public Component
{
public:
	void Operation()
	{
		cout<<"I am no decoratored ConcreteComponent"<<endl;
	}
};

// װ����;
class Decorator : public Component
{
public:
	Decorator(Component *pComponent) : m_pComponentObj(pComponent) {}
	void Operation()
	{
		if (m_pComponentObj != NULL)
		{
			m_pComponentObj->Operation();
		}
	}
protected:
	Component *m_pComponentObj;
};

// ����װ��-���ְ��;
class ConcreteDecoratorA : public Decorator
{
public:
	ConcreteDecoratorA(Component *pDecorator) : Decorator(pDecorator){}
	void Operation()
	{
		AddedBehavior();
		Decorator::Operation();
	}
	void  AddedBehavior()
	{
		cout<<"This is added behavior A."<<endl;
	}
};

// ����װ��-���ְ��;
class ConcreteDecoratorB : public Decorator
{
public:
	ConcreteDecoratorB(Component *pDecorator) : Decorator(pDecorator){}
	void Operation()
	{
		AddedBehavior();
		Decorator::Operation();
	}
	void  AddedBehavior()
	{
		cout<<"This is added behavior B."<<endl;
	}
};