#pragma once
#include <iostream>
#include <string>
using namespace std;

// �������;
class CAbstractPlayer
{
public:
	CAbstractPlayer(std::string strUserName);
	virtual ~CAbstractPlayer();

public:
	virtual void Login();
	virtual void KillBoss();
	virtual void UpdateGrade();

private:
	std::string m_strUserName;
};