#include "Prototype.h"


CPrototype::CPrototype()
{
}

CPrototype::CPrototype(const CPrototype& person)
{

}

CPrototype::~CPrototype()
{
}

void CPrototype::Release()
{
	delete this;
}