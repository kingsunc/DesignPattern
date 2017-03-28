#include "Invoker.h"

int main()
{
	// �㿾���;
	CReceiver* pReceiverA = new CReceiverA();
	CReceiver* pReceiverB = new CReceiverB();
	CMyCommand* pCmd1 = new MakeMuttonCmd(pReceiverA);
	CMyCommand* pCmd2 = new MakeChickenWingCmd(pReceiverB);

	CInvoker* pInvoker = new CInvoker();
	// ���;
	pInvoker->AddMyCmd(pCmd1);
	pInvoker->AddMyCmd(pCmd2);
	// �µ�ִ��;
	pInvoker->Notify();

	delete pReceiverA;
	delete pReceiverB;

	delete pCmd1;
	delete pCmd2;

	delete pInvoker;

	return 0;
}