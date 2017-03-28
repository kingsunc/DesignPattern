#include "Strategy.h"

int main()
{
	// ²ßÂÔ;
	Strategy *ak47 = new AK47();
	Strategy *knife = new Knife();

	// 
	Context* pCharacter = new King();
	pCharacter->Fight();

	pCharacter->SetWeapon(ak47);
	pCharacter->Fight();

	pCharacter->SetWeapon(knife);
	pCharacter->Fight();

	return 0;
}