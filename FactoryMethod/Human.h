#pragma once
#include "iostream"
using namespace std;

class CHuman
{
public:
	CHuman();
	virtual ~CHuman();

public:
	virtual void ShowSkin() = 0;	// ��ʾƤ��;
	virtual void Talk() = 0;		// ˵��;
};