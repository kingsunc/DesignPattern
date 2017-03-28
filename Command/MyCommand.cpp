#include "MyCommand.h"

CMyCommand::CMyCommand(CReceiver* pReceiver)
{
	m_pReceiver = pReceiver;
}

CMyCommand::~CMyCommand()
{
}
