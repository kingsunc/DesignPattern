#include "Component.h"

void main()
{
	CCompany* pComp = new CCompany("XX总公司");
	pComp->Add(new CDepart("财务部"));
	pComp->Add(new CDepart("研发部"));

	CCompany* pComp1 = new CCompany("XX北京分公司");
	pComp1->Add(new CDepart("财务部"));
	pComp1->Add(new CDepart("研发部"));
	pComp->Add(pComp1);

	CCompany* pComp2 = new CCompany("XX南京分公司");
	pComp2->Add(new CDepart("财务部"));
	pComp2->Add(new CDepart("研发部"));
	pComp->Add(pComp2);

	pComp->Add(new CDepart("业务部"));
	pComp->Add(new CDepart("高管层"));

	pComp->Display();
	delete pComp;
	pComp = NULL;
}

/*
什么情况下使用组合模式;
引用大话设计模式的片段：“当发现需求中是体现部分与整体层次结构时，以及你希望用户可以忽略组合对象与单个对象的不同，统一地使用组合结构中的所有对象时，就应该考虑组合模式了。;

例子为安全模式:
透明模式须将Add,Remove,vector等移到基类;
*/
