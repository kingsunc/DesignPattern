#include <iostream>  
#include <string>  
using namespace std;

class Memento
{
public:
	Memento()
	{
		state = "";
	}
	Memento(string state)
	{
		this->state = state;
	}
	string getState()
	{
		return state;
	}
	void setState(string state)
	{
		this->state = state;
	}

private:
	string state;
};

class Originator
{
public:
	Originator()
	{
		state = "";
	}

	string getState()
	{
		return state;
	}
	void setState(string state)
	{
		this->state = state;
	}
	Memento createMemento()
	{
		return Memento(this->state);
	}
	void restoreMemento(Memento memento)
	{
		this->setState(memento.getState());
	}

private:
	string state;
};

class Caretaker
{
public:
	Memento getMemento()
	{
		return memento;
	}
	void setMemento(Memento memento)
	{
		this->memento = memento;
	}

private:
	Memento memento;
};