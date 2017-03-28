#include <iostream>

class Context;

class IState
{
public:
	virtual void Handle() = 0;
};

class SiegeState : public IState
{
public:
	SiegeState(Context* pTank){}

	virtual void Handle()
	{
		std::cout << "Handle in SiegeState" << std::endl;
	}
};

class TankState : public IState
{
public:
	TankState(Context* pTank){}

	virtual void Handle()
	{
		std::cout << "Handle in TankState" << std::endl;
	}
};

class Context
{
public:
	Context()
	{
		m_pTankState	= new TankState(this);
		m_pSiegeState	= new SiegeState(this);
		m_pSelState		= m_pTankState;
	}

	void EnterTankMode()
	{
		m_pSelState = m_pTankState;
		std::cout << "Switch to tank mode" << std::endl;
	}

	void EnterSiegeMode()
	{
		m_pSelState = m_pSiegeState;
		std::cout << "Switch to siege mode" << std::endl;
	}

public:
	void Handle()
	{
		m_pSelState->Handle();
	}

private:
	TankState*		m_pTankState;
	SiegeState*		m_pSiegeState;
	IState*			m_pSelState;	// 当前选中状态;
};