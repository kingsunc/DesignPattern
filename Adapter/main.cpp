#include "Adapter.h"

void main()
{
	CTarget* pTarget = new CAdapter();
	pTarget->Requst();

	delete pTarget;
	pTarget = NULL;
}