#include <vector> 
#include <iostream>
using namespace std;
/*
注意单复数; 读入一整行的string getline(cin, s); vector<string> vec
*/ 
int main() {
	string s;
	vector<string> vec;
	int n, cnt = 0;
	cin >> n;
	getchar();
	for (int i = 0; i < n; ++i) {
		// 读入一整行的string, 包括空格 
		getline(cin, s);
		int space = 0, flag = 0, len = s.size();
		for (int j = 0; j < len; ++j) { 
			if (s[j] == ' ') space = 1;
			// 从空格后即学号后开始, 是密码 
			if (space) {
				switch(s[j]) {
					case '1': s[j] = '@'; flag = 1; break;
					case '0': s[j] = '%'; flag = 1; break;
					case 'l': s[j] = 'L'; flag = 1; break;
					case 'O': s[j] = 'o'; flag = 1; break;
				}
			}
		}
		if (flag) {
			++ cnt;
			vec.push_back(s);
		}
	}
	
	if (cnt) {
		cout << cnt << endl;
		int size = vec.size();
		for (int i = 0; i < size; ++i)
			cout << vec[i] << endl;
	} else {
		//考虑counts的单复数 
		if (n == 1)
			cout << "There is 1 account and no account is modified\n";
		else 
			cout << "There are " << n << " accounts and no account is modified\n";
	}
	return 0; 
} 
