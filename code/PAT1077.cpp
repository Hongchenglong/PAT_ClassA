#include <map>
#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;
/*
���⣺��������Ӵ� 
������ʹ��map��¼ÿ���ַ������Ӵ���������Ӵ�����=n���������
�ʼǣ�notorious���������� particles���� artistically������ stereotype�̰�ӡ�� character���� suffix��׺ i.e.�� 
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
