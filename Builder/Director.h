#pragma once
#include "IBuilder.h"

class CDirector
{
public:
	CDirector(void);
	~CDirector(void);

	// ��װ;
	void Construct(CIBuilder* pBuilder);
	// չʾ;
	void Display();

private:
	CIBuilder*		m_pBuilder;
};