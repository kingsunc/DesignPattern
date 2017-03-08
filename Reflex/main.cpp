#include "ClassFactory.h"
#include "RealClass.h"

void main()
{
	CRealClass* pClass1 = static_cast<CRealClass*>(CClassFactory::GetInstance()->CreateObject("CRealClass"));
	const char* str1 = typeid(*pClass1).name();

	CRealClass* pClass2 = static_cast<CRealClass*>(CClassFactory::GetInstance()->CreateObject("CRealClassA"));
	const char* str2 = typeid(*pClass2).name();

	CRealClass* pClass3 = static_cast<CRealClass*>(CClassFactory::GetInstance()->CreateObject("CRealClassB"));
	const char* str3 = typeid(*pClass3).name();

	CClassFactory::ReleaseInstance();
}