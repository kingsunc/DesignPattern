#pragma once

// 目标类;
class CTarget
{
public:
	CTarget(void);
	virtual ~CTarget(void);

	virtual void Requst() = 0; // 目标接口;

	void Realease();
};

CTarget* Create_Target();