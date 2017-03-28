#include "Iterator.h"

template<class Item>
class ConcreteAggregate;

template<class Item>
class ConcreteIterator : public Iterator <Item>
{
public:
	ConcreteIterator(ConcreteAggregate<Item>* pItems) : m_vecItems(pItems), m_iCur(0){};
	virtual ~ConcreteIterator(){};

	virtual Item* First()
	{
		m_iCur = 0;

		return GetCurItem();
	}
	virtual Item* Next()
	{
		if (m_iCur < m_vecItems->GetLen())
		{
			m_iCur++;
		}

		return GetCurItem();
	}
	virtual Item* GetCurItem()
	{
		if (m_iCur < m_vecItems->GetLen())
		{
			return &(*m_vecItems)[m_iCur];
		}
		else
		{
			return NULL;
		}
	}
	virtual bool IsEnd()
	{
		return (m_iCur >= m_vecItems->GetLen());
	}

private:
	ConcreteAggregate<Item>* m_vecItems;
	int m_iCur;
};

template<class Item>
class ConcreteAggregate :public Aggregate<Item>
{
public:
	ConcreteAggregate(){};
	virtual ~ConcreteAggregate(){};

	virtual Iterator<Item>* CreateIterator()
	{
		return new ConcreteIterator<Item>(this);
	}

	Item& operator[](int index)
	{
		return m_vecData[index];
	}
	int GetLen()
	{
		return m_vecData.size();
	}

	virtual void Push(const Item item)
	{
		m_vecData.push_back(item);
	}

private:
	std::vector<Item>	m_vecData;
};
