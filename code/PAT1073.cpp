#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;
/*
���⣺��ѧ������ת������ͨ����
������������λΪ����ֱ�������Ȼ������1��ʼ���Ӵ���
�ҵ�E��ȡE��ָ��e��tΪEǰ���Ӵ���
��e<0ʱ����ʾ��ǰ�ƶ��������"0."�������e-1��0�����t���
��e>0ʱ����ʾ����ƶ��������t[0]��Ȼ�����������ֿ��ܣ�
һ��С������������len>e���Ǿʹ�t�����e���������'.'�Լ�ʣ�µģ�
����len<=e��ȫ������������e-len��0��
�ʼǣ�#include <stdlib.h> atoi(s.substr(i+1).c_str())
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
