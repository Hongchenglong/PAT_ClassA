#include <vector> 
#include <iostream>
using namespace std;
/*
ע�ⵥ����; ����һ���е�string getline(cin, s); vector<string> vec
*/ 
int main() {
	string s;
	vector<string> vec;
	int n, cnt = 0;
	cin >> n;
	getchar();
	for (int i = 0; i < n; ++i) {
		// ����һ���е�string, �����ո� 
		getline(cin, s);
		int space = 0, flag = 0, len = s.size();
		for (int j = 0; j < len; ++j) { 
			if (s[j] == ' ') space = 1;
			// �ӿո��ѧ�ź�ʼ, ������ 
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
		//����counts�ĵ����� 
		if (n == 1)
			cout << "There is 1 account and no account is modified\n";
		else 
			cout << "There are " << n << " accounts and no account is modified\n";
	}
	return 0; 
} 
