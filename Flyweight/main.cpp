/*------------------------------------------------------------------------------------------------------------------------
											享元模式;
	
	main();

	说明：	flyweight是轻量级的意思，中文这边翻译成享元，更容易让人理解一些;

	享元模式是为了应对大量细粒度对象重复的问题;
	程序中存在大量细粒度的对象，每次要使用时都必须创建一个新的对象，既影响了运行效率又增加了内存消耗;
	于是有了享元模式，享元模式提取出这些细粒度对象中间公共的状态，只生成一个实例对象，所有用到这些公共属性对象的地方，都指向这一个实例。

	例如 获取具体的加载图片对象，若该图片已经加载，则不应该加载，使用已加载数据即可;

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
pA、 pA1、 pA2是相同的内存资源 共享;
*/