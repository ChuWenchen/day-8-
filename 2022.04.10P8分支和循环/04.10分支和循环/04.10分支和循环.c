#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
        //if语句
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


        // switch-case-break 语句
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);                
//    switch (day)                    //switch(一定是整数)
//    {
//    case 1:                         //case 一定是整型常量，表达式也可以
//        printf("星期一");
//        break;
//    case 2:
//        printf("星期二");
//        break;
//    case 3:
//        printf("星期三");
//        break;
//    case 4:
//        printf("星期四");
//        break;
//    case 5:
//        printf("星期五");
//        break;
//    case 6:
//        printf("星期六");
//        break;
//    case 7:
//        printf("星期日");
//        break;
//    }
//    return 0;
//}



           //   可以合并省掉一些break的情况
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
//        printf("妈的工作日\n");
//        break;
//    case 6:
//    case 7:
//        printf("休息日\n");
//        break;
//    default:                                        //default--用于处理一些非法情况
//        printf("请输入一个一到七的整数");
//    }
//    return 0;
//}



             //switch可以嵌套使用，和一个练习题
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


              //break 个continue
//int main()
//{
//    int i = 1;
//    while (i <= 10)                     //这里没有分号！！！  有分号会直接跳过循环，什么都不打印         
//    {         
//        if (i == 5)
//            continue;                   //i=5遇到continue后进入死循环
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
//            continue;                   //continue用于跳过本次循环后面的步骤，重新回到循环入口，此次代码不打印5
//       //     break;                      
//        printf("%d\n", i);
//        
//    }
//    return 0;
//}


                  //getchar（输入），putchar（输出） 的应用   
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)       //注意写清楚这里的括号   //表示键盘输入一个值getchar，给了ch
    {
        putchar(ch);                      //ctrl+z用来结束，因为当输入eof时，他会读一个打印一个
    }

    //int ch = getchar();        //gether用来接收一个键盘输入的变量，把它给了putchar用于输出
    //
    //putchar(ch);
    //printf("%c\n", ch);       
    //return 0;
}