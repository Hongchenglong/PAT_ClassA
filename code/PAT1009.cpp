#include <cstdio>
#include <iostream>
using namespace std;
/*
���⣺����ʽ��ˣ�a+b)(c+d)=ac+ad+bc+bd
������
����ʽ��˼���һ������ʽ��ÿһ�����ڶ�������ʽ��ÿһ�� 
�Ƚ�A�����ݴ���exp[]�С�����Bʱ����ѭ��1000�μ���ans[j+n] += a*exp[j] 
*/
int main() {
	int k, n; 
	double a, exp[1005] = {0}; //��ָ�������ʼ��Ϊ0 
	double ans[2005] = {0}; // ָ��������2000 
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n >> a; // nָ�� aϵ�� 
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
