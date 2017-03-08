/*------------------------------------------------------------------------------------------------------------------------
											װ����ģʽ;

	˵��;
	װ����ģʽ�ʹ���ģʽ֮�仹���кܶ����;
	װ����ģʽ��ע����һ�������϶�̬����ӷ�����Ȼ������ģʽ��ע�ڿ��ƶԶ���ķ���;
	���仰˵���ô���ģʽ�������ࣨproxy class�����Զ����Ŀͻ�����һ������ľ�����Ϣ;
	��ˣ���ʹ�ô���ģʽ��ʱ�����ǳ�����һ���������д���һ�������ʵ��;
	���ң�������ʹ��װ����ģʽ��ʱ������ͨ���������ǽ�ԭʼ������Ϊһ����������װ���ߵĹ�����;

	���ǿ���������һ�仰���ܽ���Щ���;
	ʹ�ô���ģʽ���������ʵ����֮��ĵĹ�ϵͨ���ڱ���ʱ���Ѿ�ȷ���ˣ���װ�����ܹ�������ʱ�ݹ�ر�����;

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