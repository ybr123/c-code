// homework1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<stdlib.h>

int main()
{
	int Year, Month, Day;
	printf("输入当前日期(如20201024）");
	scanf_s("%4d%2d%2d",&Year,&Month,&Day);
		switch (Month)
		{
		case 1:
			printf("Jan");
			break;
		case 2:
			printf("Feb");
			break;
		case 3:
			printf("Mar");
			break;
		case 4:
			printf("Apr");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("Jun");
			break;
		case 7:
			printf("Jly");
			break;
		case 8:
			printf("Aug");
			break;
		case 9:
			printf("Sep");
			break;
		case 10:
			printf("Oct");
			break;
		case 11:
			printf("Nov");
			break;
		case 12:
			printf("Dec");
			break;
		}
		 printf(","); printf("%d",Day); printf(","); printf("%d\n", Year);
		 system("pause");
	

	
	
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
