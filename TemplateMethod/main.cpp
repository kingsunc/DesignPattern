#include "AbstractClass.h"

int main(void)
{
	std::cout << "³å±­¿§·È:" << std::endl;
	Coffee objCoffee;
	objCoffee.PrepareRecipe();

	std::cout << std::endl;

	std::cout << "³å±­²è:" << std::endl;
	Tea objTea;
	objTea.PrepareRecipe();

	return 0;
}