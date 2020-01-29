#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;
/*
题意：科学计数法转换成普通数字
分析：若符号位为负，直接输出，然后保留从1开始的子串。
找到E后，取E的指数e。t为E前的子串。
当e<0时，表示向前移动。先输出"0."，再输出e-1个0，最后将t输出
当e>0时，表示向后移动。先输出t[0]，然后有以下两种可能，
一、小数点后的数长度len>e，那就从t先输出e个，再输出'.'以及剩下的；
二、len<=e，全部输出，再输出e-len个0。
笔记：#include <stdlib.h> atoi(s.substr(i+1).c_str())
*/ 
int main() {
	string s;
	cin >> s;
	if (s[0] == '-') cout << '-';
	s = s.substr(1);
	int i = 0;
	while (s[i] != 'E') ++i;
	int e = atoi(s.substr(i+1).c_str());
	string t = C;
	if (e < 0) {
		cout << "0.";
		e = -e;
		for (int i = 0; i < e-1; ++i) cout << '0';
		int len = t.size();
		for (int i = 0; i < len; ++i) {
			if (t[i] == '.') continue;
			cout << t[i];
		}
	} else {
		cout << t[0];
		int len = t.size()-2;
		if (len <= e) {
			for (int i = 2; i < len+2; ++i) cout << t[i];
			for (int i = 0; i < e-len; ++i) cout << '0';
		} else {
			int i;
			for (i = 2; i < e+2; ++i) cout << t[i];
			cout << '.';
			while (i < len+2) cout << t[i++];
		}
	}
	cout << endl;
	return 0;
} 
