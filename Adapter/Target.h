#pragma once

// Ŀ����;
class CTarget
{
public:
	CTarget(void);
	virtual ~CTarget(void);

	virtual void Requst() = 0; // Ŀ��ӿ�;

	void Realease();
};

CTarget* Create_Target();