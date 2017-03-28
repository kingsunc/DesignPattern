#include "Memento.h"

int main(int argc, char *argv[])
{
	Originator originator;
	originator.setState("×´Ì¬1");
	cout << "³õÊ¼×´Ì¬:" << originator.getState() << endl;

	// ±¸·Ý;
	Caretaker caretaker;
	caretaker.setMemento(originator.createMemento());

	originator.setState("×´Ì¬2");
	cout << "¸Ä±äºó×´Ì¬:" << originator.getState() << endl;

	originator.restoreMemento(caretaker.getMemento());
	cout << "»Ö¸´ºó×´Ì¬:" << originator.getState() << endl;
}