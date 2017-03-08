#include "HumanFactory.h"
#include "WhiteHuman.h"
#include "BlackHuman.h"
#include "YellowHuman.h"

CHumanFactory::CHumanFactory()
{
}

CHumanFactory::~CHumanFactory()
{
}

CHuman* CHumanFactory::CreateHuman(std::string strHumanType)
{
	if (0 == strHumanType.compare("WhiteHuman"))
	{
		return new CWhiteHuman();
	}
	else if (0 == strHumanType.compare("BlackHuman"))
	{
		return new CBlackHuman();
	}
	else if (0 == strHumanType.compare("YellowHuman"))
	{
		return new CYellowHuman();
	}

	return NULL;
}