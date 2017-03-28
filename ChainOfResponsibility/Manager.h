#pragma once
#include <iostream>  
#include <string>  
using namespace std;

// ����;  
class CRequest
{
public:
	int m_nNumber;
};

// ������; 
class CManager
{
public:
	CManager(string strTemp);
	virtual ~CManager(){};

	void SetSuccessor(CManager* pTemp);
	virtual void GetRequest(CRequest* pRequest) = 0;

protected:
	CManager*		m_pSuccessor;	// ��һ�δ�����;
	string			m_strName;
};

// ����;
class CCommonManager: public CManager
{
public:
	CCommonManager(string strName) : CManager(strName)
	{
	}
	virtual ~CCommonManager(){};

	virtual void GetRequest(CRequest* pRequest);
};

// �ܼ�;
class CMajordomo : public CManager
{
public:
	CMajordomo(string strName) : CManager(strName)
	{
	}
	virtual ~CMajordomo(){};

	virtual void GetRequest(CRequest* pRequest);
};

// �ܾ���;    
class GeneralManager : public CManager
{
public:
	GeneralManager(string strName) :CManager(strName)
	{
	}
	virtual ~GeneralManager(){};

	virtual void GetRequest(CRequest* pRequest);
};