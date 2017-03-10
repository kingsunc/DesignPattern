#include "Target.h"
#include "Adapter.h"

CTarget::CTarget(void)
{
}

CTarget::~CTarget(void)
{
}

void CTarget::Realease()
{
	delete this;
}

CTarget* Create_Target()
{
	return new CAdapter();
}