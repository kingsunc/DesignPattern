#include <iostream>  
#include <string>  
#include <list>  
using namespace std;

class Element;

class Visitor
{
public:
	virtual void Visit(Element *element){};
};

// "Element"  
class Element
{
public:
	// Methods  
	virtual void Accept(Visitor *visitor){};
};


// "ConcreteElement"  
class Employee : public Element
{
public:
	string name;
	double income;
	int vacationDays;

public:
	Employee(string name, double income, int vacationDays)
	{
		this->name = name;
		this->income = income;
		this->vacationDays = vacationDays;
	}

	void Accept(Visitor *visitor)
	{
		visitor->Visit(this);
	}
};

class IncomeVisitor : public Visitor
{
public:
	void Visit(Element *element)
	{
		Employee *employee = ((Employee*)element);
		employee->income *= 1.10;
		cout << employee->name << " 's new income: " << employee->income << endl;
	}
};

class VacationVisitor : public Visitor
{
public:
	void Visit(Element *element)
	{
		Employee *employee = ((Employee*)element);
		// Provide 3 extra vacation days  
		employee->vacationDays += 3;
		cout << employee->name << " 's new vacation days: " << employee->income << endl;
	}
};

// "ObjectStructure"  
class Employees
{
private:
	list< Employee*> employees;

public:

	void Attach(Employee *employee)
	{
		employees.push_back(employee);
	}

	void Detach(Employee *employee)
	{
		employees.remove(employee);
	}

	void Accept(Visitor *visitor)
	{
		for (std::list<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it)
			(*it)->Accept(visitor);
	}
};

/*************************************************************************************************************************

	抽象访问者（Visitor）角色：
	声明了一个或者多个访问操作，形成所有的具体元素角色必须实现的接口;

	具体访问者（ConcreteVisitor）角色：
	实现抽象访问者角色所声明的接口，也就是抽象访问者所声明的各个访问操作;

	抽象节点（Element）角色：
	声明一个接受操作，接受一个访问者对象作为一个参量;

	具体节点（ConcreteElement）角色：
	实现了抽象元素所规定的接受操作;

	结构对象（ObiectStructure）角色：
	有如下的一些责任，可以遍历结构中的所有元素;
	如果需要，提供一个高层次的接口让访问者对象可以访问每一个元素;
	如果需要，可以设计成一个复合对象或者一个聚集，如列（List）或集合（Set）;

*************************************************************************************************************************/