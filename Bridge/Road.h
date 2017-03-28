#pragma once
#include <iostream>
#include <string>
using namespace std;

// ����·����;
class CAbstractRoad
{
public:
	CAbstractRoad(){};
	virtual ~CAbstractRoad(){};

	void Run()
	{
		cout << "-��" << GetName() << "��ʻ" << endl;
	}

private:
	virtual std::string GetName() = 0;
};

//���ٹ�·;
class CSpeedWay: public CAbstractRoad
{
protected:
	virtual std::string GetName()
	{
		return "���ٹ�·";
	}
};

//�����ֵ�;
class CStreet: public CAbstractRoad
{
protected:
	virtual std::string GetName()
	{
		return "�����ֵ�";
	}
};