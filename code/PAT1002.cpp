#include <cstdio>
#include <iostream>
using namespace std;
/*
���⣺����ʽ��� 
��������Ϊָ��n�ķ�Χ��0-1000������̫��
���Կ��Դ�����double���飬�������ͬʱ��ϵ�����롣 
�ʼǣ�polynomials����ʽ exponentsָ�� coefficientsϵ�� 
*/
int main() {
	int k, n; 
	double a, exp[1005] = {0}; //��ָ�������ʼ��Ϊ0 
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
