#pragma once
#include "AbstractPlayer.h"

// ��ʵ���;
class CRealPlayer: public CAbstractPlayer
{
public:
	CRealPlayer(std::string strUserName);
	virtual ~CRealPlayer();
};