#include "AbstractFactory.h"

void main()
{
	ConcreateFactory1* pFactory1 = new ConcreateFactory1();
	AbstractProductA* pProductA = pFactory1->CreateProductA();

	pFactory1->ReleaseProductA(pProductA);

	delete pFactory1;
	pFactory1 = NULL;
}