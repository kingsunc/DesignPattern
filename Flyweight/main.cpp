/*------------------------------------------------------------------------------------------------------------------------
											��Ԫģʽ;
	
	main();

	˵����	flyweight������������˼��������߷������Ԫ���������������һЩ;

	��Ԫģʽ��Ϊ��Ӧ�Դ���ϸ���ȶ����ظ�������;
	�����д��ڴ���ϸ���ȵĶ���ÿ��Ҫʹ��ʱ�����봴��һ���µĶ��󣬼�Ӱ��������Ч�����������ڴ�����;
	����������Ԫģʽ����Ԫģʽ��ȡ����Щϸ���ȶ����м乫����״̬��ֻ����һ��ʵ�����������õ���Щ�������Զ���ĵط�����ָ����һ��ʵ����

	���� ��ȡ����ļ���ͼƬ��������ͼƬ�Ѿ����أ���Ӧ�ü��أ�ʹ���Ѽ������ݼ���;

------------------------------------------------------------------------------------------------------------------------*/

#include "MyBmpFactory.h"

void main()
{
	CMyBmp* pA = AfxGetBmpFactory()->GetMyBmp("C:\\AAA.bmp");
	CMyBmp* pB = AfxGetBmpFactory()->GetMyBmp("C:\\BBB.bmp");
	CMyBmp* pC = AfxGetBmpFactory()->GetMyBmp("C:\\CCC.bmp");
	CMyBmp* pA1 = AfxGetBmpFactory()->GetMyBmp("C:\\AAA.bmp");
	CMyBmp* pA2 = AfxGetBmpFactory()->GetMyBmp("C:\\AAA.bmp");
	CMyBmp* pB1 = AfxGetBmpFactory()->GetMyBmp("C:\\BBB.bmp");

	AfxGetBmpFactory()->ReleaseInstance();
}

/*
pA�� pA1�� pA2����ͬ���ڴ���Դ ����;
*/