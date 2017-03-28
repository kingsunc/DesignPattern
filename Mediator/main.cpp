#include "Mediator.h"

// ���԰���;
int main()
{
	Mediator* pMediator = new HouseMediator();
	Person* pRenter = new Renter(pMediator);		// �ⷿ��;
	Person* pLandlord = new Landlord(pMediator);	// ����;

	pRenter->SendMessage("�������Ͼ�·�������׷��ӣ��۸�800Ԫһ����\n");
	pLandlord->SendMessage("���ⷿ�ӣ��Ͼ�·100�ţ�70ƽ�ף�1000Ԫһ����\n");

	delete pRenter;
	delete pLandlord;
	delete pMediator;

	return 0;
}