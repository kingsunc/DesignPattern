#include "RealClass.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// CRealClass
IMPLEMENT_MYCLASS(CRealClass);

CRealClass::CRealClass()
{
}

CRealClass::~CRealClass()
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// CRealClassA
IMPLEMENT_MYCLASS(CRealClassA);

CRealClassA::CRealClassA()
{
	cout << "CRealClassA Construct\n";
}

CRealClassA::~CRealClassA()
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// CRealClassB
IMPLEMENT_MYCLASS(CRealClassB);

CRealClassB::CRealClassB()
{
	cout << "CRealClassB Construct\n";
}

CRealClassB::~CRealClassB()
{
}