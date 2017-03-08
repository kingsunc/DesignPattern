#pragma once
#include <iostream>
#include <string>
using namespace std;

class CMyBmp
{
public:
	CMyBmp();
	~CMyBmp();

	bool Load(string strPath);
};