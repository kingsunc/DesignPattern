#pragma once
#include <iostream>  
#include <map>  
#include <string>  

// ������ʽ;
class AbstractExpression
{
public:
	virtual int interpreter(Context context) = 0;
};

// ���ս�����ʽ + ;
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

// ���ս�����ʽ - ;
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

// �ս�����ʽ;
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
