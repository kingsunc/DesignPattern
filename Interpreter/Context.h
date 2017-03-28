#pragma once
#include <iostream>  
#include <map>  
#include <string>  
using namespace std;

class Context
{
public:
	void addValue(string strKey, int iVal)
	{
		m_mapValue[strKey] = iVal;
	}

	int getValue(string key)
	{
		return m_mapValue[key];
	}

private:
	map<string, int> m_mapValue;
};