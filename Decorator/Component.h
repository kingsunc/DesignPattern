#pragma once
#include <iostream>
using namespace std;

class Component
{
public:
	virtual void Operation() = 0;
};

// 被装饰者;
class ConcreteComponent : public Component
{
public:
	void Operation()
	{
		cout<<"I am no decoratored ConcreteComponent"<<endl;
	}
};

// 装饰者;
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

// 具体装饰-添加职责;
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

// 具体装饰-添加职责;
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