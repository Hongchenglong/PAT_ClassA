#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
������
�ӵ�ǰλ��i��ʼ��ֱ��d[i]!=d[j]��j>len��λ��j�ϡ� 
temp += d[i] + j-i; �ٰ�j����i��ֱ���ַ��������� 
*/
string tostring(int n) {
	string ret;
	while (n) {
		ret += (n%10)+'0';
		n /= 10;
	}
	reverse(ret.begin(), ret.end());
	return ret;
}
int main() {
	string d, temp;
	int n, len, j;
	cin >> d >> n;
	for (int cnt = 0; cnt < n-1; cnt++) {
		len = d.size();
		temp = "";
		for (int i = 0; i < len; i = j) {
			for (j = i; j < len && d[i]==d[j]; j++);
			temp += d[i] + tostring(j-i); 
		}
		d = temp;
	}
	cout << d << endl;
	
	return 0;
} 
