#pragma once
#include "AbstractPlayer.h"

// ÕæÊµÍæ¼Ò;
class CRealPlayer: public CAbstractPlayer
{
public:
	CRealPlayer(std::string strUserName);
	virtual ~CRealPlayer();
};