#include "Mediator.h"

// 测试案例;
int main()
{
	Mediator* pMediator = new HouseMediator();
	Person* pRenter = new Renter(pMediator);		// 租房者;
	Person* pLandlord = new Landlord(pMediator);	// 房东;

	pRenter->SendMessage("我想在南京路附近租套房子，价格800元一个月\n");
	pLandlord->SendMessage("出租房子：南京路100号，70平米，1000元一个月\n");

	delete pRenter;
	delete pLandlord;
	delete pMediator;

	return 0;
}