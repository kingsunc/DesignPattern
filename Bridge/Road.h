#pragma once
#include <iostream>
#include <string>
using namespace std;

// 抽象路基类;
class CAbstractRoad
{
public:
	CAbstractRoad(){};
	virtual ~CAbstractRoad(){};

	void Run()
	{
		cout << "-在" << GetName() << "行驶" << endl;
	}

private:
	virtual std::string GetName() = 0;
};

//高速公路;
class CSpeedWay: public CAbstractRoad
{
protected:
	virtual std::string GetName()
	{
		return "高速公路";
	}
};

//市区街道;
class CStreet: public CAbstractRoad
{
protected:
	virtual std::string GetName()
	{
		return "市区街道";
	}
};