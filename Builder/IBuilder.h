#pragma once
#include "Product.h"

// Ì×²Í»ùÀà;
class CIBuilder
{
public:
	CIBuilder(void);
	~CIBuilder(void);

	void BulidParts();
	CProduct* GetProduct();

protected:
	virtual void BulidDrink() = 0;
	virtual void BulidFood()= 0;
	virtual void BulidDishes()= 0;
protected:
	CProduct	m_Product;
};

// Ì×²Í1;
class CIBuilder1: public CIBuilder
{
public:
	CIBuilder1(void);
	~CIBuilder1(void);
protected:
	virtual void BulidDrink();
	virtual void BulidFood();
	virtual void BulidDishes();
};

// Ì×²Í2;
class CIBuilder2: public CIBuilder
{
public:
	CIBuilder2(void);
	~CIBuilder2(void);
protected:
	virtual void BulidDrink();
	virtual void BulidFood();
	virtual void BulidDishes();
};