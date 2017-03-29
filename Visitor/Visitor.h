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

	��������ߣ�Visitor����ɫ��
	������һ�����߶�����ʲ������γ����еľ���Ԫ�ؽ�ɫ����ʵ�ֵĽӿ�;

	��������ߣ�ConcreteVisitor����ɫ��
	ʵ�ֳ�������߽�ɫ�������Ľӿڣ�Ҳ���ǳ���������������ĸ������ʲ���;

	����ڵ㣨Element����ɫ��
	����һ�����ܲ���������һ�������߶�����Ϊһ������;

	����ڵ㣨ConcreteElement����ɫ��
	ʵ���˳���Ԫ�����涨�Ľ��ܲ���;

	�ṹ����ObiectStructure����ɫ��
	�����µ�һЩ���Σ����Ա����ṹ�е�����Ԫ��;
	�����Ҫ���ṩһ���߲�εĽӿ��÷����߶�����Է���ÿһ��Ԫ��;
	�����Ҫ��������Ƴ�һ�����϶������һ���ۼ������У�List���򼯺ϣ�Set��;

*************************************************************************************************************************/