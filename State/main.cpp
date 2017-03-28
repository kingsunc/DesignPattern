#include "state.h"

int main()
{
	Context tank;
	tank.EnterTankMode();
	tank.Handle();

	tank.EnterSiegeMode();
	tank.Handle();

	tank.EnterTankMode();
	tank.Handle();

	return 0;
}