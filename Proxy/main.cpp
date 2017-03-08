/*------------------------------------------------------------------------------------------------------------------------
											代理模式;
	

------------------------------------------------------------------------------------------------------------------------*/
#include "ProxyPlayer.h"
#include "RealPlayer.h"

void main()
{
	CRealPlayer* pRealPlayer = new CRealPlayer("张三");
	CProxyPlayer* pProxyPlayer = new CProxyPlayer(pRealPlayer);
	pProxyPlayer->Login();
	pProxyPlayer->KillBoss();
	pProxyPlayer->UpdateGrade();

	delete pProxyPlayer;
	pProxyPlayer = NULL;
	delete pRealPlayer;
	pRealPlayer = NULL;
}

/*
	1.	代理模式(Proxy Pattern)定义;
			provide a surrogate or placeholder for another object to control access to it.
			为其他对象提供一种代理以控制对这个对象的访问;
			代理模式也叫做委托模式,它是一项基本设计技巧,许多其他的模式,如状态模式、策略模式、访问者模式本质上是在更特殊的场合采用了委托模式;

	2.	代理模式的优点;
		a. 职责清晰;
		真实的角色就是实现实际的业务逻辑,不用关心其他非本职责的事务,通过后期的代理完成一件完成事务,附带的结果就是编程简洁清晰;
		b. 高扩展性;
		具体主题角色是随时都会发生变化的,只要它实现了接口,甭管它如何变化,都逃不脱如来佛的手掌（接口）,那我们的代理类完全就可以在不做任何修改的情况下使用;
		c. 智能化;
		这在我们以上讲解中还没有体现出来，不过在我们以下的动态代理章节中你就会看到代理的智能化，读者有兴趣也可以看看Struts是如何把表单元素映射到对象上的;

	3.	代理模式的应用;
		a. 普通代理;
		b. 强制代理: 只能通过代理访问对象;
		c. 个性代理: 代理可以有自己的属性及方法;
		d. 虚拟代理：;
			在需要的时候才初始化主题对象，可以避免被代理对象较多而引起的初始化缓慢的问题;
			它的缺点就是需要在每个方法中判断主题对象是否被创建，这就是虚拟代理，非常简单。;
		e. 动态代理;
			???
*/