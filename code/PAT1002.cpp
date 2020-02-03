#include <cstdio>
#include <iostream>
using namespace std;
/*
题意：多项式相加 
分析：因为指数n的范围在0-1000，不算太大。
所以可以创建个double数组，在输入的同时将系数加入。 
笔记：polynomials多项式 exponents指数 coefficients系数 
*/
int main() {
	int k, n; 
	double a, exp[1005] = {0}; //将指数数组初始化为0 
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n >> a;
		exp[n] += a;
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n >> a;
		exp[n] += a;
	}
	int cnt = 0;
	for (int i = 1000; i >=0; i--) 
		if (exp[i]) cnt++;
	cout << cnt;	
	for (int i = 1000; i >=0; i--) {
		if (exp[i]) {
			printf(" %d %.1lf", i, exp[i]);
		}
	}
	
	return 0;
} 
