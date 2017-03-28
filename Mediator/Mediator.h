#pragma once
#include <iostream>
#include <string>
using namespace std;

class Mediator;
// 抽象人;
class Person
{
public:
	Person(Mediator* pMediator)
	{
		m_pMediator = pMediator;
	}

public:
	virtual void SendMessage(string message) {}    // 向中介发送信息;
	virtual void GetMessage(string message) {}     // 从中介获取信息;

protected:
	Mediator* m_pMediator;		//中介;
};

// 抽象中介机构;
class Mediator
{
public:
	virtual void Send(string message, Person *person) {}
	virtual void SetRenter(Person *A) {}		// 设置其中一方;
	virtual void SetLandlord(Person *B) {}
};

// 租房者;
class Renter : public Person
{
public:
	Renter(Mediator* pMediator) : Person(pMediator)
	{
		pMediator->SetRenter(this);
	}
public:
	void SetMediator(Mediator *pMediator) { m_pMediator = pMediator; }
	void SendMessage(string message) { m_pMediator->Send(message, this); }
	void GetMessage(string message) { cout << "租房者收到信息： " << message; }
};

// 房东;
class Landlord : public Person
{
public:
	Landlord(Mediator* pMediator) : Person(pMediator)
	{
		pMediator->SetLandlord(this);
	}
public:
	void SetMediator(Mediator *mediator) { m_pMediator = mediator; }
	void SendMessage(string message) { m_pMediator->Send(message, this); }
	void GetMessage(string message) { cout << "房东收到信息： " << message; }
};

// 房屋中介;
class HouseMediator : public Mediator
{
public:
	HouseMediator() : m_pRenter(0), m_pLandlord(0) {}

	void SetRenter(Person* pRenter)
	{
		m_pRenter = pRenter;
	}
	void SetLandlord(Person* pLandlord)
	{
		m_pLandlord = pLandlord;
	}

	void Send(string strMessage, Person* pPerson)
	{
		if (pPerson == m_pRenter)	
		{
			// 租房者给房东发信息;
			m_pLandlord->GetMessage(strMessage); // 房东收到信息;
		}
		else
		{
			m_pRenter->GetMessage(strMessage);
		}
	}

private:
	Person* m_pRenter;		// 租房者;
	Person* m_pLandlord;	// 房东;
};