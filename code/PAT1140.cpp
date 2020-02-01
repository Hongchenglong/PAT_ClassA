#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
分析：
从当前位置i开始，直到d[i]!=d[j]或j>len的位置j上。 
temp += d[i] + j-i; 再把j赋给i，直至字符串结束。 
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
