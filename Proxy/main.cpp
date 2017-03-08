/*------------------------------------------------------------------------------------------------------------------------
											����ģʽ;
	

------------------------------------------------------------------------------------------------------------------------*/
#include "ProxyPlayer.h"
#include "RealPlayer.h"

void main()
{
	CRealPlayer* pRealPlayer = new CRealPlayer("����");
	CProxyPlayer* pProxyPlayer = new CProxyPlayer(pRealPlayer);
	pProxyPlayer->Login();
	pProxyPlayer->KillBoss();
	pProxyPlayer->UpdateGrade();

	delete pProxyPlayer;
	pProxyPlayer = NULL;
	delete pRealPlayer;
	pRealPlayer = NULL;
}

/*
	1.	����ģʽ(Proxy Pattern)����;
			provide a surrogate or placeholder for another object to control access to it.
			Ϊ���������ṩһ�ִ����Կ��ƶ��������ķ���;
			����ģʽҲ����ί��ģʽ,����һ�������Ƽ���,����������ģʽ,��״̬ģʽ������ģʽ��������ģʽ���������ڸ�����ĳ��ϲ�����ί��ģʽ;

	2.	����ģʽ���ŵ�;
		a. ְ������;
		��ʵ�Ľ�ɫ����ʵ��ʵ�ʵ�ҵ���߼�,���ù��������Ǳ�ְ�������,ͨ�����ڵĴ������һ���������,�����Ľ�����Ǳ�̼������;
		b. ����չ��;
		���������ɫ����ʱ���ᷢ���仯��,ֻҪ��ʵ���˽ӿ�,�¹�����α仯,���Ӳ�������������ƣ��ӿڣ�,�����ǵĴ�������ȫ�Ϳ����ڲ����κ��޸ĵ������ʹ��;
		c. ���ܻ�;
		�����������Ͻ����л�û�����ֳ������������������µĶ�̬�����½�����ͻῴ�����������ܻ�����������ȤҲ���Կ���Struts����ΰѱ���Ԫ��ӳ�䵽�����ϵ�;

	3.	����ģʽ��Ӧ��;
		a. ��ͨ����;
		b. ǿ�ƴ���: ֻ��ͨ���������ʶ���;
		c. ���Դ���: �����������Լ������Լ�����;
		d. ���������;
			����Ҫ��ʱ��ų�ʼ��������󣬿��Ա��ⱻ��������϶������ĳ�ʼ������������;
			����ȱ�������Ҫ��ÿ���������ж���������Ƿ񱻴��������������������ǳ��򵥡�;
		e. ��̬����;
			???
*/