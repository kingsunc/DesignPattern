#include "Manager.h"

int main()
{
	CManager* pCommon = new CCommonManager("�ž���");
	CManager* pMajor = new CMajordomo("���ܼ�");
	GeneralManager* pGeneral = new GeneralManager("����");
	pCommon->SetSuccessor(pMajor);
	pMajor->SetSuccessor(pGeneral);
	CRequest* pRequest = new CRequest();

	pRequest->m_nNumber = 6;
	pCommon->GetRequest(pRequest);

	pRequest->m_nNumber = 66;
	pCommon->GetRequest(pRequest);

	pRequest->m_nNumber = 666;
	pCommon->GetRequest(pRequest);

	delete pRequest;
	delete pMajor;
	delete pCommon;
	delete pGeneral;

	return 0;
}