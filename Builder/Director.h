#pragma once
#include "IBuilder.h"

class CDirector
{
public:
	CDirector(void);
	~CDirector(void);

	// 组装;
	void Construct(CIBuilder* pBuilder);
	// 展示;
	void Display();

private:
	CIBuilder*		m_pBuilder;
};