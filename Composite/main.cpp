#include "Component.h"

void main()
{
	CCompany* pComp = new CCompany("XX�ܹ�˾");
	pComp->Add(new CDepart("����"));
	pComp->Add(new CDepart("�з���"));

	CCompany* pComp1 = new CCompany("XX�����ֹ�˾");
	pComp1->Add(new CDepart("����"));
	pComp1->Add(new CDepart("�з���"));
	pComp->Add(pComp1);

	CCompany* pComp2 = new CCompany("XX�Ͼ��ֹ�˾");
	pComp2->Add(new CDepart("����"));
	pComp2->Add(new CDepart("�з���"));
	pComp->Add(pComp2);

	pComp->Add(new CDepart("ҵ��"));
	pComp->Add(new CDepart("�߹ܲ�"));

	pComp->Display();
	delete pComp;
	pComp = NULL;
}

/*
ʲô�����ʹ�����ģʽ;
���ô����ģʽ��Ƭ�Σ��������������������ֲ����������νṹʱ���Լ���ϣ���û����Ժ�����϶����뵥������Ĳ�ͬ��ͳһ��ʹ����Ͻṹ�е����ж���ʱ����Ӧ�ÿ������ģʽ�ˡ�;

����Ϊ��ȫģʽ:
͸��ģʽ�뽫Add,Remove,vector���Ƶ�����;
*/
