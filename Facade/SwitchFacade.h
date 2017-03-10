#pragma once
#include "SubSystem.h"

// 门面模式,多用于对外接口类;
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



