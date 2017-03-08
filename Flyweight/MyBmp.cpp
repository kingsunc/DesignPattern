#include "MyBmp.h"


CMyBmp::CMyBmp()
{
}


CMyBmp::~CMyBmp()
{
}

bool CMyBmp::Load(string strPath)
{
	cout << "加载路径图片：" << strPath.c_str() << "成功!\n";

	return true;
}