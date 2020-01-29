#include <map>
#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;
/*
题意：求最长公共子串 
分析：使用map记录每个字符串的子串，如果有子串个数=n，则输出。
笔记：notorious臭名昭著的 particles助词 artistically艺术上 stereotype刻板印象 character人物 suffix后缀 i.e.即 
*/
int main() {
	map<string, int> mp;
	string str[105], ans;
	int n, cnt = 0;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		getline(cin, str[i]);
		int len = str[i].size();
		for (int j = 0; j < len; j++) {
			cnt = ++mp[str[i].substr(j)];
			if (cnt == n) {
				cout << str[i].substr(j) << endl;
				return 0;
			}
		}
	}
	cout << "nai\n";
	return 0;
} 
