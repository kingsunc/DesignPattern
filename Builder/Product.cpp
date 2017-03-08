#include "Product.h"
#include "iostream"
using namespace std;

CProduct::CProduct(void)
{
}


CProduct::~CProduct(void)
{
}

void CProduct::Display()
{
	cout << "饮料: " << m_strDrink << ends;
	cout << "主食: " << m_strFood << ends;
	cout << "菜品: " << m_strDishes << endl;
}

void CProduct::SetDrink(std::string strDrink)
{
	m_strDrink = strDrink;
}

void CProduct::SetFood(std::string strFood)
{
	m_strFood = strFood;
}

void CProduct::SetDishes(std::string strDishes)
{
	m_strDishes = strDishes;
}