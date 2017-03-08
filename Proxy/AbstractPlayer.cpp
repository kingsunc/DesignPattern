#include "AbstractPlayer.h"

CAbstractPlayer::CAbstractPlayer(std::string strUserName):
m_strUserName(strUserName)
{
}

CAbstractPlayer::~CAbstractPlayer(void)
{
}

void CAbstractPlayer::Login()
{
	cout << m_strUserName << "登录了系统\n";
}

void CAbstractPlayer::KillBoss()
{
	cout << m_strUserName << "在杀怪\n";
}

void CAbstractPlayer::UpdateGrade()
{
	cout << m_strUserName << "升级了\n";
}
