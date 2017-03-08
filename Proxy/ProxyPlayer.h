#pragma once
#include "AbstractPlayer.h"

// �������;
class CProxyPlayer: public CAbstractPlayer
{
public:
	CProxyPlayer(CAbstractPlayer* pRealPlayer = NULL);
	virtual ~CProxyPlayer();

public:
	virtual void Login();
	virtual void KillBoss();
	virtual void UpdateGrade();

private:
	CAbstractPlayer* m_pRealPlayer;
};
