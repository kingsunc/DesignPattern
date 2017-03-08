/*------------------------------------------------------------------------------------------------------------------------
											装饰器模式;

	说明;
	装饰器模式和代理模式之间还是有很多差别的;
	装饰器模式关注于在一个对象上动态的添加方法，然而代理模式关注于控制对对象的访问;
	换句话说，用代理模式，代理类（proxy class）可以对它的客户隐藏一个对象的具体信息;
	因此，当使用代理模式的时候，我们常常在一个代理类中创建一个对象的实例;
	并且，当我们使用装饰器模式的时候，我们通常的做法是将原始对象作为一个参数传给装饰者的构造器;

	我们可以用另外一句话来总结这些差别;
	使用代理模式，代理和真实对象之间的的关系通常在编译时就已经确定了，而装饰者能够在运行时递归地被构造;

------------------------------------------------------------------------------------------------------------------------*/

#include "Component.h"

int main()
{
	Component *pComponentObj = new ConcreteComponent();
	pComponentObj->Operation();
	cout << "=============================================" << endl;

	Decorator *pDecoratorAOjb = new ConcreteDecoratorA(pComponentObj);
	pDecoratorAOjb->Operation();
	cout << "=============================================" << endl;

	Decorator *pDecoratorBOjb = new ConcreteDecoratorB(pComponentObj);
	pDecoratorBOjb->Operation();
	cout << "=============================================" << endl;

	Decorator *pDecoratorABOjb = new ConcreteDecoratorA(pDecoratorBOjb);
	pDecoratorABOjb->Operation();
	cout << "=============================================" << endl;

	Decorator *pDecoratorBAOjb = new ConcreteDecoratorB(pDecoratorAOjb);
	pDecoratorBAOjb->Operation();
	cout << "=============================================" << endl;

	delete pDecoratorBAOjb;
	pDecoratorBAOjb = NULL;
	delete pDecoratorBOjb;
	pDecoratorBOjb = NULL;
	delete pDecoratorAOjb;
	pDecoratorAOjb = NULL;
	delete pComponentObj;
	pComponentObj = NULL;
}