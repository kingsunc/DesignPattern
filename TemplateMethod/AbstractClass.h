#include <iostream>

template <typename T>

// ����������;
class CaffeineBeverage  
{
public:
	void PrepareRecipe()		// ���������ϳ��ݷ�;
	{
		BoilWater();			// ��ˮ���;
		Brew();					// ����;
		PourInCup();			// �ѿ��������ϵ�������;
		AddCondiments();		// �ӵ���;
	}

	void BoilWater()
	{
		std::cout << "��ˮ���" << std::endl;
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
		std::cout << "�÷�ˮ���ݿ���" << std::endl;
	}
	void PourInCup()
	{
		std::cout << "�ѿ��ȷŽ�����" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "���Ǻ�ţ��" << std::endl;
	}
};

class Tea : public CaffeineBeverage<Tea>

{
public:
	void Brew()
	{
		std::cout << "�÷�ˮ���ݲ�Ҷ" << std::endl;
	}
	void PourInCup()
	{
		std::cout << "�Ѳ�Ҷ�Ž�����" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "������" << std::endl;
	}
};