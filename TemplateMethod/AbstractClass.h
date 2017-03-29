#include <iostream>

template <typename T>

// 咖啡因饮料;
class CaffeineBeverage  
{
public:
	void PrepareRecipe()		// 咖啡因饮料冲泡法;
	{
		BoilWater();			// 把水煮沸;
		Brew();					// 冲泡;
		PourInCup();			// 把咖啡因饮料倒进杯子;
		AddCondiments();		// 加调料;
	}

	void BoilWater()
	{
		std::cout << "把水煮沸" << std::endl;
	}
	void Brew()
	{
		static_cast<T *>(this)->Brew();
	}
	void PourInCup()
	{
		static_cast<T *>(this)->PourInCup();
	}
	void AddCondiments()
	{
		static_cast<T *>(this)->AddCondiments();
	}
};

class Coffee : public CaffeineBeverage<Coffee>
{
public:
	void Brew()
	{
		std::cout << "用沸水冲泡咖啡" << std::endl;
	}
	void PourInCup()
	{
		std::cout << "把咖啡放进杯子" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "加糖和牛奶" << std::endl;
	}
};

class Tea : public CaffeineBeverage<Tea>

{
public:
	void Brew()
	{
		std::cout << "用沸水浸泡茶叶" << std::endl;
	}
	void PourInCup()
	{
		std::cout << "把茶叶放进杯子" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "加柠檬" << std::endl;
	}
};