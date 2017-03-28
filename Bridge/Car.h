#include "Road.h"

// 抽象车辆基类;
class CAbstractCar
{
public:
	CAbstractCar(CAbstractRoad* pRoad)
	{
		m_pRoad = pRoad;
	}
	virtual ~CAbstractCar(){};

	void Run()
	{
		cout <<  "-驾驶" << GetName();
		m_pRoad->Run();
	}

private:
	virtual std::string GetName() = 0;

	CAbstractRoad*		m_pRoad;
};

// 吉普车;
class CJeep: public CAbstractCar
{
public:
	CJeep(CAbstractRoad* pRoad): CAbstractCar(pRoad){};

private:
	virtual std::string GetName()
	{
		return "吉普车";
	}
};

// 公共汽车;
class CBus: public CAbstractCar
{
public:
	CBus(CAbstractRoad* pRoad): CAbstractCar(pRoad){};

private:
	virtual std::string GetName()
	{
		return "公共汽车";
	}
};