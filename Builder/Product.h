#pragma once
#include <string>

// ��Ʒ;
class CProduct
{
public:
	CProduct(void);
	~CProduct(void);

	void Display();			// չʾ;

	void SetDrink(std::string strDrink);
	void SetFood(std::string strFood);
	void SetDishes(std::string strDishes);

private:
	std::string m_strDrink;		// ����;
	std::string m_strFood;		// ��ʳ;
	std::string m_strDishes;	// ��Ʒ;
};