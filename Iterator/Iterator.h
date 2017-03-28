#pragma once
#include <iostream>  
#include <vector>  
using namespace std;

template<class Item>
class Iterator
{
public:
	Iterator(){};
	virtual ~Iterator(){}

	virtual Item* First() = 0;
	virtual Item* Next() = 0;
	virtual Item* GetCurItem() = 0;
	virtual bool IsEnd() = 0;
};

template<class Item>
class Aggregate
{
public:
	Aggregate(){};
	virtual ~Aggregate(){}

	virtual Iterator<Item>* CreateIterator() = 0;
	virtual void ReleaseIterator(Iterator<Item>* pIterator)
	{
		delete pIterator;
		pIterator = nullptr;
	}

	virtual void Push(const Item item) = 0;
};