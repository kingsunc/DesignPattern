#include <iostream>  
#include <vector>  
#include <string>  
using namespace std;

class Secretary;

// ����Ʊ��ͬ���ࣨ�۲���󣬹۲��ߣ�;
class StockObserver
{
public:
	StockObserver(string strName)
	{
		m_strName = strName;
	}

	void Update(string strAction)
	{
		cout << m_strName << " get the action : " << strAction << endl;
	}

private:
	string		m_strName;
};

// �����ࣨ�������֪ͨ�ߣ�;
class Secretary
{
public:
	void Add(StockObserver ob)
	{
		observers.push_back(ob); 
	}
	void Remove(int addIndex)
	{
		if ( addIndex >= 0 && addIndex < (int)(observers.size()) )
		{
			observers.erase(observers.begin() + addIndex);
		}
	}
	void Notify(string strAction)
	{
		vector<StockObserver>::iterator it;
		for (it = observers.begin(); it != observers.end(); ++it)
		{
			it->Update(strAction);
		}
	}

private:
	vector<StockObserver> observers;
};