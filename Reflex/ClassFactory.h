#pragma once

#include <map>
#include <string>
#include <lmcons.h>
using namespace std;

typedef void* (*CreateClass)();
typedef map<string, CreateClass>	MA_CTRATECLASS;

class CClassFactory
{
public:
	void* CreateObject(string strClassName);
	void RegistControl(string strClassName, CreateClass pFunc);

	static CClassFactory* GetInstance();
	static void ReleaseInstance();

private:	
	CClassFactory();
	virtual ~CClassFactory();

private:
	MA_CTRATECLASS		m_mapClass;
	static CClassFactory*	m_pInstance;
};

class CDynamicClass
{
public:
	CDynamicClass(const char* chClassName, CreateClass pFunc)
	{
		CClassFactory::GetInstance()->RegistControl(chClassName, pFunc);
	}
};

#define DECLARE_MYCLASS(class_name)		\
	public:	\
	static void* PASCAL CreateObject();\

#define IMPLEMENT_MYCLASS(class_name)		\
	void* PASCAL class_name::CreateObject()	\
	{ return new class_name; }	\
	CDynamicClass s_dynamic##class_name(#class_name, (CreateClass) class_name::CreateObject);