#pragma once
#include <iostream>
using namespace std;

/******************************************��ϵͳ��*************/

// ���;
class Light
{
public:
	void TurnOn();
	void TurnOff();

private:
	bool m_bOpen;
};

// ����;
class Fan
{
public:
	void TurnOn();
	void TurnOff();

private:
	bool m_bOpen;
};

// ���ӣ�
class Television  
{
public:
	void TurnOn();
	void TurnOff();

private:
	bool m_bOpen;
};
