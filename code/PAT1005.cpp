#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
string ans[100000];
int main() {
	int cnt = 0;
	unsigned long long sum = 0;
	string num[10] = {"zero","one","two","three","four",
					"five","six","seven","eight","nine"};
	string str;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len; ++i) {
		sum += str[i]-'0';
	}
	if (!sum) { // 先考虑和为0时 
		cout << "zero" << endl;
		return 0;
	}
	while (sum) {
		ans[cnt++] = num[sum % 10];
		sum /= 10;
	}
	int first = 1;
	for (int i = --cnt; i >= 0; --i) {
		if (first) {
			first = 0;
			cout << ans[i];
		} else {
			cout << ' ' << ans[i];	
		}
	}
	cout << endl;
	return 0;
} 
