/*------------------------------------------------------------------------------------------------------------------------
											单例模式;
	
	main();

	说明：	只有一个单一实例CMyManager;
			体现在面向对象方面，CMyManager定义一个静态指针、和两个静态函数以及(私有化构造函数、析构函数);

	注意：	线程安全，采用互斥体的方式实现;
------------------------------------------------------------------------------------------------------------------------*/

#include "MyManager.h"
#include <assert.h>

void DoTest()
{
	CMyManager *pMyManager1 = CMyManager::GetInstance();

	CMyManager *pMyManager2 = CMyManager::GetInstance();

	CMyManager *pMyManager3 = CMyManager::GetInstance();

	assert((pMyManager1 == pMyManager2) && (pMyManager1 == pMyManager3));

	CMyManager::ReleaseInstance();
}

int main()
{
	DoTest();

	return 0;
}

/*
单例模式应用;

	1.	单例模式的优点;

	由于单例模式在内存中只有一个实例，减少了内存开支，特别是一个对象需要频繁的被创建、销毁，而且创建或销毁时性能又无法优化，单例模式的优势就非常明显;

	由于单例模式只生成一个实例，减少了系统性能开销，当一个对象的产生需要比较多的资源时，如读取配置、产生其他依赖对象时，则可以通过在应用启动时直接产生一个单例对象;
	然后永久驻留内存的方式来解决（在Java EE中采用单例模式时需要注意JVM垃圾回收机制）;
	
	单例模式可以避免对资源的多重占用,例如一个写文件动作,由于只有一个实例存在内存中，避免对同一个资源文件的同时写操作;

	单例模式可以在系统设置全局的访问点，优化环共享资源访问，例如可以设计一个单例类，负责所有数据表的映射处理;


	2.	单例模式的缺点;

	单例模式没有接口，扩展很困难，若要扩展，除了修改代码没有第二种途径可以实现。单例模式为什么不能增加接口呢？;
	因为接口对单例模式是没有任何的意义，它要求“自行实例化”，并且提供单一实例、接口或抽象类是不可能被实例化的;

	单例模式对测试是不利的。在并行开发环境中，如果单例模式没有完成，是不能进行测试的，没有接口也不能使用mock的方式虚拟一个对象;
	单例模式与单一职责原则有冲突。一个类应该只实现一个的逻辑，而不关心它是否是单例的，决定它是不是要单例是环境决定的;
	单例模式把“要单例”和业务逻辑融合也在一个类中;


	3.	单例模式的使用场景;

	在一个系统中，要求一个类有且仅有一个对象，如果出现多个对象就会出现“不良反应”时，则可以采用单例模式，具体的场景如下;
		a. 要求生成唯一序列号的环境;
		b. 在整个项目中需要有访问一个共享访问点或共享数据，例如一个Web页面上的计数器，可以不用每次刷新都记录到数据库中;
	使用单例模式保持计数器的值，并确保是线程安全的;

	创建一个对象需要消耗的资源过多，如要访问IO、访问数据库等资源;
	需要定义大量的静态常量和静态方法（如工具类）的环境，可以采用单例模式（当然，也可以直接声明为static的方式）;


	4.	单例模式的注意事项;

	在高并发情况下，请注意单例模式的线程同步问题;
*/