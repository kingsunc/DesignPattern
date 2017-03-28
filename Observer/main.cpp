#include "Observer.h"

int main()
{
	// ����֪ͨ��; 
	Secretary* pSec = new Secretary();
	// �۲���;
	StockObserver* s1 = new StockObserver("Zhang San");
	StockObserver* s2 = new StockObserver("Li Si");
	// ����֪ͨ����;
	pSec->Add(*s1);
	pSec->Add(*s2);

	// ֪ͨ�¼�; 
	pSec->Notify("The boss is coming...");

	// ��̬ɾ��; 
	pSec->Remove(0);

	pSec->Notify("The boss is leaving...");

	return 0;
}