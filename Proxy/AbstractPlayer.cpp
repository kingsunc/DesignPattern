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
	cout << m_strUserName << "��¼��ϵͳ\n";
}

void CAbstractPlayer::KillBoss()
{
	cout << m_strUserName << "��ɱ��\n";
}

void CAbstractPlayer::UpdateGrade()
{
	cout << m_strUserName << "������\n";
}
