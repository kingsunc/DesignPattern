#include "SwitchFacade.h"

SwitchFacade::SwitchFacade():
m_pLight(new Light()),
m_pFan(new Fan()),
m_pTv(new Television())
{
}

SwitchFacade::~SwitchFacade()
{
	delete m_pLight;
	delete m_pFan;
	delete m_pTv;
}

void SwitchFacade::TurnOn()
{
	LightOn();
	FanOn();
	TvOn();
}

void SwitchFacade::TurnOff()
{
	LightOff();
	FanOff();
	TvOff();
}
void SwitchFacade::LightOn()
{
	m_pLight->TurnOn();
}

void SwitchFacade::LightOff()
{
	m_pLight->TurnOff();
}

void SwitchFacade::FanOn()
{
	m_pFan->TurnOn();
}

void SwitchFacade::FanOff()
{
	m_pFan->TurnOff();
}

void SwitchFacade::TvOn()
{
	m_pTv->TurnOn();
}

void SwitchFacade::TvOff()
{
	m_pTv->TurnOff();
}