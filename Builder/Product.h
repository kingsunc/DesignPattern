#pragma once
#include <string>

// 产品;
class CProduct
{
public:
	CProduct(void);
	~CProduct(void);

	void Display();			// 展示;

	void SetDrink(std::string strDrink);
	void SetFood(std::string strFood);
	void SetDishes(std::string strDishes);

private:
	std::string m_strDrink;		// 饮料;
	std::string m_strFood;		// 主食;
	std::string m_strDishes;	// 菜品;
};