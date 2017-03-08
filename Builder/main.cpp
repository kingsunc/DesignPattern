
/*------------------------------------------------------------------------------------------------------------------------
											建造者模式;

	Product是必须要知道，没有抽象，但是这个产品却可以由不同的部分组合而成;
	Director里的construct也是固定，没有抽象出来，如果要更改步骤，也要添加一个函数，或者再添一个Diector;
	所以建造者模式一般应用于步骤不会发生大的变化，而产品会发生大变化的情况;

常用的场景;

	C#中的StringBuilder就是一个建造者的例子，但只是一个建造者，还缺一个Director，不能算一个完整的建造者模式;
	建造者模式一般应用于构建产品的步骤（也可以称为算法）不变，而每个步骤的具体实现又剧烈变化的情况;

优点;
	1. 隔离了构建的步骤和具体的实现，为产品的具体实现提供了灵活度;

	2. 封装和抽象了每个步骤的实现，实现了依赖倒转原则;
	
	3. 封装了具体的步骤，减少了代码的冗余;

缺点;

	1. 要求构建产品的步骤（算法）是不能剧烈变化的，最好是不变的，这样就影响了灵活度;

------------------------------------------------------------------------------------------------------------------------*/

#include "Director.h"

void main()
{
	CDirector objDirector;
	CIBuilder1* pBulier1 = new CIBuilder1();
	CIBuilder2* pBulier2 = new CIBuilder2();

	objDirector.Construct(pBulier1);
	objDirector.Display();

	objDirector.Construct(pBulier2);
	objDirector.Display();

	delete pBulier1;
	pBulier1 = NULL;

	delete pBulier2;
	pBulier2 = NULL;
}