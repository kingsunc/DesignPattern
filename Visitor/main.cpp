#include "Visitor.h"

void main()
{
	Employees* pList = new Employees();
	pList->Attach(new Employee("Tom", 25000.0, 14));
	pList->Attach(new Employee("Thomas", 35000.0, 16));
	pList->Attach(new Employee("Roy", 45000.0, 21));

	// Create two visitors  
	IncomeVisitor *v1 = new IncomeVisitor();
	VacationVisitor *v2 = new VacationVisitor();

	// Employees are visited  
	pList->Accept(v1);
	pList->Accept(v2);
}

/*************************************************************************************************************************

访问者模式有如下的优点;
	1. 访问者模式使得增加新的操作变得很容易。如果一些操作依赖于一个复杂的结构对象的话，那么一般而言，增加新的操作会很复杂;
	而使用访问者模式，增加新的操作就意味着增加一个新的访问者类，因此，变得很容易;
	2. 访问者模式将有关的行为集中到一个访问者对象中，而不是分散到一个个的节点类中;
	3. 访问者模式可以跨过几个类的等级结构访问属于不同的等级结构的成员类;
	迭代子只能访问属于同一个类型等级结构的成员对象，而不能访问属于不同等级结构的对象。访问者模式可以做到这一点;
	4. 积累状态。每一个单独的访问者对象都集中了相关的行为，从而也就可以在访问的过程中将执行操作的状态积累在自己内部，而不是分散到很多的节点对象中;
	这是有益于系统维护的优点;

访问者模式有如下的缺点;
	1. 增加新的节点类变得很困难。每增加一个新的节点都意味着要在抽象访问者角色中增加一个新的抽象操作，并在每一个具体访问者类中增加相应的具体操作;
	2. 破坏封装。访问者模式要求访问者对象访问并调用每一个节点对象的操作，这隐含了一个对所有节点对象的要求：它们必须暴露一些自己的操作和内部状态;
	不然，访问者的访问就变得没有意义。由于访问者对象自己会积累访问操作所需的状态，从而使这些状态不再存储在节点对象中，这也是破坏封装的;

*************************************************************************************************************************/