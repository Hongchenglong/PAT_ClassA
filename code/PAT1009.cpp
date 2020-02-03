#include <cstdio>
#include <iostream>
using namespace std;
/*
题意：多项式相乘（a+b)(c+d)=ac+ad+bc+bd
分析：
多项式相乘即第一个多项式的每一项乘与第二个多项式的每一项 
先将A的数据存在exp[]中。输入B时，再循环1000次计算ans[j+n] += a*exp[j] 
*/
int main() {
	int k, n; 
	double a, exp[1005] = {0}; //将指数数组初始化为0 
	double ans[2005] = {0}; // 指数最大可能2000 
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n >> a; // n指数 a系数 
		exp[n] = a;
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n >> a;
		for (int j = 0; j <= 1000; j++)
			ans[j+n] += a*exp[j];  
	}
	int cnt = 0;
	for (int i = 2000; i >=0; i--) 
		if (ans[i]) cnt++;
	cout << cnt;	
	for (int i = 2000; i >=0; i--) {
		if (ans[i]) {
			printf(" %d %.1lf", i, ans[i]);
		}
	}
	
	return 0;
} 
