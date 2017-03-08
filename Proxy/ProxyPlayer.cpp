#include "ProxyPlayer.h"

//CProxyPlayer::CProxyPlayer(std::string strUserName):
//CAbstractPlayer(strUserName)
//{
//
//}

CProxyPlayer::CProxyPlayer(CAbstractPlayer* pRealPlayer):
CAbstractPlayer("Proxy")
{
	m_pRealPlayer = pRealPlayer;
}

CProxyPlayer::~CProxyPlayer()
{

}

void CProxyPlayer::Login()
{
	if (NULL != m_pRealPlayer)
	{
		m_pRealPlayer->Login();
	}
	else
	{
		CAbstractPlayer::Login();
	}
}

void CProxyPlayer::KillBoss()
{
	if (NULL != m_pRealPlayer)
	{
		m_pRealPlayer->KillBoss();
	}
	else
	{
		CAbstractPlayer::KillBoss();
	}
}

void CProxyPlayer::UpdateGrade()
{
	if (NULL != m_pRealPlayer)
	{
		m_pRealPlayer->UpdateGrade();
	}
	else
	{
		CAbstractPlayer::UpdateGrade();
	}
}
