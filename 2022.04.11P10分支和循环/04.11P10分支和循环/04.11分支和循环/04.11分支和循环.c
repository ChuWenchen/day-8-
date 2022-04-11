#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	int set = 0;
	int ed = 0;
	printf("请输入密码：\n");
	scanf("%s", password);                 //getchar函数是键盘输入函数，其功能是从键盘上输入一个字符。
	                                       //scanf函数在读取数字时会跳过空格、制表符和换行符。
	                                       //getchar函数只能输入字符型, 输入时遇到回车键才从缓冲区依次提取字符。
	printf("请确认（Y/N）：\n");
	//ed = getchar();                     //这里的getchar要放在while循环里面，是要他一直读区缓存区的字符直到\n为止，不是读取了一个之后进入循环，这样它永远不是\n会进入死循环
	while ((ed=getchar()) != '\n')
	{
		;
	};
	set = getchar();
	if (set == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("放弃确认");
	}
	return 0;
}