#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
        //if���
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//		
//	return 0;
//}


        // switch-case-break ���
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);                
//    switch (day)                    //switch(һ��������)
//    {
//    case 1:                         //case һ�������ͳ��������ʽҲ����
//        printf("����һ");
//        break;
//    case 2:
//        printf("���ڶ�");
//        break;
//    case 3:
//        printf("������");
//        break;
//    case 4:
//        printf("������");
//        break;
//    case 5:
//        printf("������");
//        break;
//    case 6:
//        printf("������");
//        break;
//    case 7:
//        printf("������");
//        break;
//    }
//    return 0;
//}



           //   ���Ժϲ�ʡ��һЩbreak�����
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("��Ĺ�����\n");
//        break;
//    case 6:
//    case 7:
//        printf("��Ϣ��\n");
//        break;
//    default:                                        //default--���ڴ���һЩ�Ƿ����
//        printf("������һ��һ���ߵ�����");
//    }
//    return 0;
//}



             //switch����Ƕ��ʹ�ã���һ����ϰ��
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        n++;
//    case 2:
//        m++;
//    case 3:
//        switch (n)
//        {
//        case 1:
//            n++;
//        case 2:
//            n++;
//            m++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m=%d,n=%d", m, n);
//    return 0;
//}


              //break ��continue
//int main()
//{
//    int i = 1;
//    while (i <= 10)                     //����û�зֺţ�����  �зֺŻ�ֱ������ѭ����ʲô������ӡ         
//    {         
//        if (i == 5)
//            continue;                   //i=5����continue�������ѭ��
//       //     break;                      
//        printf("%d\n", i);
//        i++;
//    }
//    return 0;
//}


//int main()
//{
//    int i = 1;
//    while (i <= 10)                     
//    {
//        i++;
//        if (i == 5)
//            continue;                   //continue������������ѭ������Ĳ��裬���»ص�ѭ����ڣ��˴δ��벻��ӡ5
//       //     break;                      
//        printf("%d\n", i);
//        
//    }
//    return 0;
//}


                  //getchar�����룩��putchar������� ��Ӧ��   
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)       //ע��д������������   //��ʾ��������һ��ֵgetchar������ch
    {
        putchar(ch);                      //ctrl+z������������Ϊ������eofʱ�������һ����ӡһ��
    }

    //int ch = getchar();        //gether��������һ����������ı�������������putchar�������
    //
    //putchar(ch);
    //printf("%c\n", ch);       
    //return 0;
}