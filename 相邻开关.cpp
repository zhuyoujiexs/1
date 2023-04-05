// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _crt_secure_no_warnings
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int bee(int arr[], int k,int sz)
{
	int left = 0;
	int ri = sz - 1;
	int le = 0;
	while (le <= ri)
	{
		int mid = (le + ri) / 2;
		if (arr[mid] < k)
			le = mid + 1;
		else if (arr[mid] > k)
			ri = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int i = 0;
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	
	while (1)
	{
		int t = 0;
		int o = 0;
		scanf("%d", &k);
		int error = 0;
		if (arr[0] == 11 and arr[1] == 2 and arr[2] == 3 and arr[3] == 4 and arr[4] == 5 and arr[5] == 6 and arr[6] == 7 and arr[7] == 8 and arr[8] == 9)
			break;
		int yy = k - 1;
		if (k % 3 == 0)
			t = 1;
		else
			t = 0;
			if (k % 3 == 1)
				o = 1;
			else
				o = 0;
		if (arr[yy] < 10)
			arr[yy] += 10;
		else
			arr[yy] -= 10;
		if (yy + 1 <= 8 && arr[yy + 1] < 10)
		{
			if (t == 0)
				arr[yy + 1] += 10;
		}
				else if (yy + 1 <= 8 && arr[yy + 1] > 10)
				{
					if (t == 0)
						arr[yy + 1] -= 10;
				}
					if (yy - 1 >= 0 && arr[yy - 1] < 10)

			{
				if (o != 1)
					arr[yy - 1] += 10;
			}
			else if (yy - 1 >= 0 && arr[yy - 1] > 10)
			{
				if (o != 1)
					arr[yy - 1] -= 10;
			}
				if (yy + 3 <= 8 && arr[yy + 3] < 10)
				arr[yy + 3] += 10;
			else if (yy + 3 <= 8 && arr[yy + 3] > 10)
				arr[yy + 3] -= 10;
			
			if (yy - 3 >= 0 && arr[yy - 3]<10)
				arr[yy - 3] += 10;
			else if (yy - 3 >= 0 && arr[yy - 3] > 10)
				arr[yy - 3] -= 10;
			
			for (i = 0; i < 9; i++)
			{
				if (i == 10)
					printf("\0");
				else
					printf("%2d  ", arr[i]);
			
				if ((i + 1) % 3 == 0)
					printf("\n");
			}
				printf("\n");
			
	}
	printf("成功");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
/* 调试程序: F5 或调试 >“*//*开始调试”菜单

 入门使用技巧:
   1. 使用解决方案资源管理器窗口添加/管理文件
   2. 使用团队资源管理器窗口连接到源代码管理
  +
 ASDG5A3. 使用输出窗口查看生成输出和其他消息
   *//*4. 使用错误列表窗口查看错误*/
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件