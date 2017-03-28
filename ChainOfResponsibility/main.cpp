#include "Manager.h"

int main()
{
	CManager* pCommon = new CCommonManager("张经理");
	CManager* pMajor = new CMajordomo("李总监");
	GeneralManager* pGeneral = new GeneralManager("赵总");
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