#pragma once
#include <iostream>  
#include <map>  
#include <string>  

// 抽象表达式;
class AbstractExpression
{
public:
	virtual int interpreter(Context context) = 0;
};

// 非终结符表达式 + ;
class AddNonterminalExpression : public AbstractExpression
{
public:
	AddNonterminalExpression(AbstractExpression *left, AbstractExpression *right)
	{
		this->pLeft = left;
		this->pRight = right;
	}

	int interpreter(Context context)
	{
		return this->pLeft->interpreter(context) + this->pRight->interpreter(context);
	}

private:
	AbstractExpression* pLeft;
	AbstractExpression* pRight;
};

// 非终结符表达式 - ;
class SubtractNonterminalExpression : public AbstractExpression
{
public:
	SubtractNonterminalExpression(AbstractExpression *left, AbstractExpression *right)
	{
		this->pLeft = left;
		this->pRight = right;
	}

	int interpreter(Context context)
	{
		return this->pLeft->interpreter(context) - this->pRight->interpreter(context);
	}

private:
	AbstractExpression* pLeft;
	AbstractExpression* pRight;
};

// 终结符表达式;
class TerminalExpression : public AbstractExpression
{
public:
	TerminalExpression(int iVal)
	{
		this->m_iResult = iVal;
	}

	int interpreter(Context context)
	{
		return this->m_iResult;
	}

private:
	int m_iResult;
};
