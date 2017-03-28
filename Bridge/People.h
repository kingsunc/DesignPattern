#include "Car.h"

// 抽象车辆基类;
class CAbstractPeople
{
public:
	CAbstractPeople(CAbstractCar* pCar)
	{
		m_pCar = pCar;
	}
	virtual ~CAbstractPeople(){};

	void Run()
	{
		cout << GetName();
		m_pCar->Run();
	}

private:
	virtual std::string GetName() = 0;

	CAbstractCar*		m_pCar;
};

// 男人;
class CMan: public CAbstractPeople
{
public:
	CMan(CAbstractCar* pCar): CAbstractPeople(pCar){};

private:
	virtual std::string GetName()
	{
		return "男人";
	}
};

// 女人;
class CWoman: public CAbstractPeople
{
public:
	CWoman(CAbstractCar* pCar): CAbstractPeople(pCar){};

private:
	virtual std::string GetName()
	{
		return "女人";
	}
};