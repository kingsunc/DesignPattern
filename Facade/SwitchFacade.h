#pragma once
#include "SubSystem.h"

// ����ģʽ,�����ڶ���ӿ���;
class SwitchFacade
{
public:
	SwitchFacade();
	virtual ~SwitchFacade();

	void TurnOn();
	void TurnOff();

	void LightOn();
	void LightOff();

	void FanOn();
	void FanOff();

	void TvOn();
	void TvOff();

private:
	Light*			m_pLight;
	Fan*			m_pFan;
	Television*		m_pTv;
};



