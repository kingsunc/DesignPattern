#include "ConcreteIterator.h"

int main()
{
	// int;
	{
		ConcreteAggregate<int>* pAggregate = new ConcreteAggregate<int>();
		pAggregate->Push(10);
		pAggregate->Push(20);
		pAggregate->Push(30);

		Iterator<int>* it = pAggregate->CreateIterator();
		for (it->First(); !it->IsEnd(); it->Next())
		{
			cout << *(it->GetCurItem()) << endl;
		}
		pAggregate->ReleaseIterator(it);

		delete pAggregate;
	}

	// string;
	{
	ConcreteAggregate<string>* pAggregate = new ConcreteAggregate<string>();
		pAggregate->Push("hello");
		pAggregate->Push("world");
		pAggregate->Push("sunshine");

		Iterator<string>* it = pAggregate->CreateIterator();
		for (it->First(); !it->IsEnd(); it->Next())
		{
			cout << (it->GetCurItem())->c_str() << endl;
		}
		pAggregate->ReleaseIterator(it);

		delete pAggregate;
	}

	return 0;
}