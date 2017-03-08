#include "Director.h"


CDirector::CDirector(void)
{
}


CDirector::~CDirector(void)
{
}

void CDirector::Construct(CIBuilder* pBuilder)
{
	if (NULL != pBuilder)
	{
		m_pBuilder = pBuilder;
	}

	pBuilder->BulidParts();
}

void CDirector::Display()
{
	m_pBuilder->GetProduct()->Display();
}