#pragma once
#include <iostream>
#include <string>
using namespace std;

class Mediator;
// ������;
class Person
{
public:
	Person(Mediator* pMediator)
	{
		m_pMediator = pMediator;
	}

public:
	virtual void SendMessage(string message) {}    // ���н鷢����Ϣ;
	virtual void GetMessage(string message) {}     // ���н��ȡ��Ϣ;

protected:
	Mediator* m_pMediator;		//�н�;
};

// �����н����;
class Mediator
{
public:
	virtual void Send(string message, Person *person) {}
	virtual void SetRenter(Person *A) {}		// ��������һ��;
	virtual void SetLandlord(Person *B) {}
};

// �ⷿ��;
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
	void GetMessage(string message) { cout << "�ⷿ���յ���Ϣ�� " << message; }
};

// ����;
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
	void GetMessage(string message) { cout << "�����յ���Ϣ�� " << message; }
};

// �����н�;
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
			// �ⷿ�߸���������Ϣ;
			m_pLandlord->GetMessage(strMessage); // �����յ���Ϣ;
		}
		else
		{
			m_pRenter->GetMessage(strMessage);
		}
	}

private:
	Person* m_pRenter;		// �ⷿ��;
	Person* m_pLandlord;	// ����;
};