#pragma once
#include <iostream>
using namespace std;

/******************************************子系统类*************/

// 电灯;
class Light
{
public:
	void TurnOn();
	void TurnOff();

private:
	bool m_bOpen;
};

// 电扇;
class Fan
{
public:
	void TurnOn();
	void TurnOff();

private:
	bool m_bOpen;
};

// 电视；
class Television  
{
public:
	void TurnOn();
	void TurnOff();

private:
	bool m_bOpen;
};
