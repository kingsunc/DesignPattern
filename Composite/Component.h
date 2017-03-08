#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

// 节点基类;
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

// 公司(枝节点);
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

// 部门(叶节点);
class CDepart: public CComponent
{
public:
	CDepart(std::string strName);
	virtual ~CDepart(void);
};
