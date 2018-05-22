// compare size.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int max(int a, int b);
int main()
{
	int a;
	int b;
	cin >> a >> b;
	//scanf("%d %d", &a, &b);
	cout << "max=" << max(a, b) << endl;
	//printf("max = %d\n", max(a, b));
	return 0;
}
int max(int a, int b)
{
	int max;
	if (a>b)
		max = a;
	else
		max = b;
	return max;
}