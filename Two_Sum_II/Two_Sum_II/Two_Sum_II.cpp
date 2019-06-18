// Two_Sum_II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>  //包括min和max函数

using namespace std;
/*
167题目：给定一个有序整性数组和一个整数target，
	在其中寻找两个不同的元素，使其和为target。返回这两个数的缩影
	如numbers=[2,7,11,15],target=9;
	则结果为返回数字2，7的索引1，2（假设索引从1开始）
*/
//对撞指针的方法
class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int left = 0;
		int right = numbers.size() - 1;

		while (left<right)
		{
			int res[2] = { 0 };
			if (numbers[left] + numbers[right] == target)
			{
				res[0] = left + 1;
				res[1] = right + 1;
				return vector<int>(res, res + 2);
			}
			else if (numbers[left] + numbers[right] < target)
			{
				left++;
			}
			else //numbers[left]+numbers[right]>target
				right--;
		}
		throw invalid_argument("The input has no solution.");
	}
};

int main()
{
	int a[] = { 2,7,11,15 };

	int target = 9;

	vector<int> vec(a, a + sizeof(a) / sizeof(a[0]));

	vector<int>res;

	res = Solution().twoSum(vec,target);

	for (int i=0;i< res.size();i++)
	{
		cout << res[i] << " ";
	}

	cout << endl;
    std::cout << "Hello World!\n"; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
