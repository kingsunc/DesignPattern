
/*------------------------------------------------------------------------------------------------------------------------
											ԭ��ģʽ;
	
	��ʵ������ģʽ�Ƚϼ򵥣������ܽ�һ�¾����������;

	1�� ����һ��������࣬������Clone()����Ϊ���麯��;

	2�� ʵ�����������࣬����ʵ�ָ��ƹ��캯������ʵ��Clone()����;

------------------------------------------------------------------------------------------------------------------------*/

#include "ConcretePrototypeA.h"
#include "ConcretePrototypeB.h"

void main()
{
	CPrototype* pObj1 = new ConcretePrototypeB("Hello", "World");
	CPrototype* pObj2 = new ConcretePrototypeA(13, 14);
	// SHow:
	pObj1->Show();
	pObj2->Show();

	CPrototype* pObj3 = pObj1->Clone();
	CPrototype* pObj4 = pObj2->Clone();

	delete pObj1;
	pObj1 = NULL;
	delete pObj2;
	pObj2 = NULL;

	// ɾ��1��2���3��4��Ӱ�죨�����;
	pObj3->Show();
	pObj4->Show();

	// ע��˭������˭���������������dll��Ӱ��;
	pObj3->Release();
	pObj3 = NULL;
	pObj4->Release();
	pObj4 = NULL;
}