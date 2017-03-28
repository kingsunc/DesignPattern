#include "Memento.h"

int main(int argc, char *argv[])
{
	Originator originator;
	originator.setState("״̬1");
	cout << "��ʼ״̬:" << originator.getState() << endl;

	// ����;
	Caretaker caretaker;
	caretaker.setMemento(originator.createMemento());

	originator.setState("״̬2");
	cout << "�ı��״̬:" << originator.getState() << endl;

	originator.restoreMemento(caretaker.getMemento());
	cout << "�ָ���״̬:" << originator.getState() << endl;
}