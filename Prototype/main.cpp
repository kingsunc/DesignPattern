
/*------------------------------------------------------------------------------------------------------------------------
											原型模式;
	
	其实这个设计模式比较简单，我们总结一下具体操作步骤;

	1、 声明一个抽象基类，并定义Clone()函数为纯虚函数;

	2、 实例化各个子类，并且实现复制构造函数，并实现Clone()函数;

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

	// 删除1、2后对3、4无影响（深拷贝）;
	pObj3->Show();
	pObj4->Show();

	// 注意谁创建的谁负责清理，否则对于dll有影响;
	pObj3->Release();
	pObj3 = NULL;
	pObj4->Release();
	pObj4 = NULL;
}