#include <iostream>  
using namespace std;

//这里用CS里的人物作为例子，每个人都可以有几个武器，武器之间动态切换，武器拥有统一的攻击命令;

// 抽象策略类;
class Strategy
{
public:
	void virtual UseWeapon() = 0;
};

class AK47 :public Strategy
{
public:
	void UseWeapon()
	{
		cout << "Use AK47 to shoot! \n\n";
	}
};

class Knife :public Strategy
{
public:
	void UseWeapon()
	{
		cout << "Use Knife to kill! \n\n";
	}
};

class Context
{
public:
	Context()
	{
		weapon = 0;
	}
	void SetWeapon(Strategy* pWeap)
	{
		this->weapon = pWeap;
	}
	void virtual Fight() = 0;

protected:
	Strategy *weapon;
};

class King : public Context
{
public:
	void Fight()
	{
		cout << " The king : ";
		if (this->weapon == NULL)
		{
			cout << "You don't have a weapon! Please Set Weapon! \n\n";
		}
		else
		{
			weapon->UseWeapon();
		}
	}
};