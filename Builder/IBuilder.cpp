#include "IBuilder.h"


CIBuilder::CIBuilder(void)
{
}

CIBuilder::~CIBuilder(void)
{
}

CProduct* CIBuilder::GetProduct()
{
	return &m_Product;
}

void CIBuilder::BulidParts()
{
	BulidDrink();
	BulidFood();
	BulidDishes();
}

CIBuilder1::CIBuilder1(void)
{
}

CIBuilder1::~CIBuilder1(void)
{
}

void CIBuilder1::BulidDrink()
{
	m_Product.SetDrink("A1");
}

void CIBuilder1::BulidFood()
{
	m_Product.SetFood("B1");
}

void CIBuilder1::BulidDishes()
{
	m_Product.SetDishes("C1");
}

CIBuilder2::CIBuilder2(void)
{
}

CIBuilder2::~CIBuilder2(void)
{
}

void CIBuilder2::BulidDrink()
{
	m_Product.SetDrink("A2");
}

void CIBuilder2::BulidFood()
{
	m_Product.SetFood("B2");
}

void CIBuilder2::BulidDishes()
{
	m_Product.SetDishes("C2");
}