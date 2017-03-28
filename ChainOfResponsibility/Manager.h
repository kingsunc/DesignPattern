#pragma once
#include <iostream>  
#include <string>  
using namespace std;

// 请求;  
class CRequest
{
public:
	int m_nNumber;
};

// 管理者; 
class CManager
{
public:
	CManager(string strTemp);
	virtual ~CManager(){};

	void SetSuccessor(CManager* pTemp);
	virtual void GetRequest(CRequest* pRequest) = 0;

protected:
	CManager*		m_pSuccessor;	// 下一任处理者;
	string			m_strName;
};

// 经理;
class CCommonManager: public CManager
{
public:
	CCommonManager(string strName) : CManager(strName)
	{
	}
	virtual ~CCommonManager(){};

	virtual void GetRequest(CRequest* pRequest);
};

// 总监;
class CMajordomo : public CManager
{
public:
	CMajordomo(string strName) : CManager(strName)
	{
	}
	virtual ~CMajordomo(){};

	virtual void GetRequest(CRequest* pRequest);
};

// 总经理;    
class GeneralManager : public CManager
{
public:
	GeneralManager(string strName) :CManager(strName)
	{
	}
	virtual ~GeneralManager(){};

	virtual void GetRequest(CRequest* pRequest);
};