#include "Component.h"

CComponent::CComponent(std::string strName)
{
	m_strName	= strName;
	m_pParent	= NULL;
}

CComponent::~CComponent(void)
{
}

void CComponent::Display()
{
	for (int i = 0; i < GetLevel(); i++)
	{
		cout << "\t";
	}
	cout << m_strName << endl;
}

void CComponent::SetParent(CComponent* pParent)
{
	m_pParent = pParent;
}

CComponent* CComponent::GetParent()
{
	return m_pParent;
}

int CComponent::GetLevel()
{
	int iLevel = 0;
	CComponent* pTemp = GetParent();
	while (pTemp)
	{
		++iLevel;
		pTemp = pTemp->GetParent();
	}
	return iLevel;
}

CCompany::CCompany(std::string strName): CComponent(strName)
{
}

CCompany::~CCompany(void)
{
	for (int i = 0; i < int(m_vecComponent.size()); i++)
	{
		delete m_vecComponent[i];
	}
}

void CCompany::Add(CComponent* pComp)
{
	pComp->SetParent(this);
	m_vecComponent.push_back(pComp);
}

void CCompany::Remove(CComponent* pComp)
{
}

void CCompany::Display()
{
	CComponent::Display();
	for (int i = 0; i < int(m_vecComponent.size()); i++)
	{
		m_vecComponent[i]->Display();
	}
}

CDepart::CDepart(std::string strName): CComponent(strName)
{
}

CDepart::~CDepart(void)
{

}
