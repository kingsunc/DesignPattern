#include "AbstractClass.h"

int main(void)
{
	std::cout << "�屭����:" << std::endl;
	Coffee objCoffee;
	objCoffee.PrepareRecipe();

	std::cout << std::endl;

	std::cout << "�屭��:" << std::endl;
	Tea objTea;
	objTea.PrepareRecipe();

	return 0;
}