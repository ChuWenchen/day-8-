#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	int set = 0;
	int ed = 0;
	printf("���������룺\n");
	scanf("%s", password);                 //getchar�����Ǽ������뺯�����书���ǴӼ���������һ���ַ���
	                                       //scanf�����ڶ�ȡ����ʱ�������ո��Ʊ���ͻ��з���
	                                       //getchar����ֻ�������ַ���, ����ʱ�����س����Ŵӻ�����������ȡ�ַ���
	printf("��ȷ�ϣ�Y/N����\n");
	//ed = getchar();                     //�����getcharҪ����whileѭ�����棬��Ҫ��һֱ�������������ַ�ֱ��\nΪֹ�����Ƕ�ȡ��һ��֮�����ѭ������������Զ����\n�������ѭ��
	while ((ed=getchar()) != '\n')
	{
		;
	};
	set = getchar();
	if (set == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("����ȷ��");
	}
	return 0;
}