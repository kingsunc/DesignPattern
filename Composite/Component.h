#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

// �ڵ����;
class CComponent
{
public:
	CComponent(std::string strName);
	virtual ~CComponent(void);

	virtual void Display();
	
	void SetParent(CComponent* pParent);
	CComponent* GetParent();
	
	int GetLevel();

private:
	std::string		m_strName;
	CComponent*		m_pParent;
};

// ��˾(֦�ڵ�);
class CCompany: public CComponent
{
public:
	CCompany(std::string strName);
	virtual ~CCompany(void);
	
	void Add(CComponent* pComp);
	void Remove(CComponent* pComp);

	virtual void Display();

private:
	std::vector<CComponent*>	m_vecComponent;
};

// ����(Ҷ�ڵ�);
class CDepart: public CComponent
{
public:
	CDepart(std::string strName);
	virtual ~CDepart(void);
};
