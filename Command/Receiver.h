#pragma once
#include <iostream>
#include <string>
using namespace std;

// ÷¥––√¸¡Ó;
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
		cout << "A øæ—Ú»‚ ∞Ù∞Ùﬂ’" << endl;
	}
	virtual void MakeChickenWing()
	{
		cout << "A øæº¶≥· ∞Ù∞Ùﬂ’" << endl;
	}
};

class CReceiverB : public CReceiver
{
public:
	CReceiverB(){};
	virtual ~CReceiverB(){};

	virtual void MakeMutton()
	{
		cout << "B øæ—Ú»‚ ≤ª“ª∞„" << endl;
	}
	virtual void MakeChickenWing()
	{
		cout << "B øæº¶≥· ≤ª“ª∞„" << endl;
	}
};