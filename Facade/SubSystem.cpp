#include "SubSystem.h"

void Light::TurnOn()
{
	m_bOpen = true;
	cout << "Light Is Opened" << endl;
}

void Light::TurnOff()
{
	m_bOpen = false;
	cout << "Light Is Closed" << endl;
}

void Fan::TurnOn()
{
	m_bOpen = true;
	cout << "Fan Is Opened" << endl;
}

void Fan::TurnOff()
{
	m_bOpen = false;
	cout << "Fan Is Closed" << endl;
}

void Television::TurnOn()
{
	m_bOpen = true;
	cout << "Television Is Opened" << endl;
}

void Television::TurnOff()
{
	m_bOpen = false;
	cout << "Television Is Closed" << endl;
}
