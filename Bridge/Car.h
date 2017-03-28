#include "Road.h"

// ����������;
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
		cout <<  "-��ʻ" << GetName();
		m_pRoad->Run();
	}

private:
	virtual std::string GetName() = 0;

	CAbstractRoad*		m_pRoad;
};

// ���ճ�;
class CJeep: public CAbstractCar
{
public:
	CJeep(CAbstractRoad* pRoad): CAbstractCar(pRoad){};

private:
	virtual std::string GetName()
	{
		return "���ճ�";
	}
};

// ��������;
class CBus: public CAbstractCar
{
public:
	CBus(CAbstractRoad* pRoad): CAbstractCar(pRoad){};

private:
	virtual std::string GetName()
	{
		return "��������";
	}
};