#pragma once
#include <iostream>
#include <string>
using namespace std;

// ִ������;
class CReceiver
{
public:
	CReceiver(){};
	virtual ~CReceiver(){};

	virtual void MakeMutton() = 0;
	virtual void MakeChickenWing() = 0;
};

class CReceiverA : public CReceiver
{
public:
	CReceiverA(){};
	virtual ~CReceiverA(){};

	virtual void MakeMutton()
	{
		cout << "A ������ ������" << endl;
	}
	virtual void MakeChickenWing()
	{
		cout << "A ������ ������" << endl;
	}
};

class CReceiverB : public CReceiver
{
public:
	CReceiverB(){};
	virtual ~CReceiverB(){};

	virtual void MakeMutton()
	{
		cout << "B ������ ��һ��" << endl;
	}
	virtual void MakeChickenWing()
	{
		cout << "B ������ ��һ��" << endl;
	}
};