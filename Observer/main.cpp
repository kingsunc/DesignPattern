#include "Observer.h"

int main()
{
	// 创建通知者; 
	Secretary* pSec = new Secretary();
	// 观察者;
	StockObserver* s1 = new StockObserver("Zhang San");
	StockObserver* s2 = new StockObserver("Li Si");
	// 加入通知队列;
	pSec->Add(*s1);
	pSec->Add(*s2);

	// 通知事件; 
	pSec->Notify("The boss is coming...");

	// 动态删除; 
	pSec->Remove(0);

	pSec->Notify("The boss is leaving...");

	return 0;
}