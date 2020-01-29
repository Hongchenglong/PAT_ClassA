#include <iostream>
using namespace std;

int id[1005];
int main() {
	int n, len, cnt = 0;
	cin >> n;
	getchar();
	string s[1005];
	for (int i = 0; i < n; ++i) {
		getline(cin, s[i]);	
	}
	for (int i = 0; i < n; ++i) {
		int space = 0;
		int flag = 1;
		len = s[i].length();
		for (int j = 0; j < len; ++j) {
			if (s[i][j] == ' ') space = 1;
			if (space) {
				if (s[i][j] == '1') {
					flag = 0;
					s[i][j] = '@';
				} else if (s[i][j] == '0') {
					flag = 0;
					s[i][j] = '%';
				} else if (s[i][j] == 'l') {
					flag = 0;
					s[i][j] = 'L';
				} else if (s[i][j] == 'O') {
					flag = 0;
					s[i][j] = 'o';
				}	
			}		
		}
		if (!flag) {
			cnt++;
			id[i] = 1;
		}
	}
	if (cnt) {
		cout << cnt << endl;
		for (int i = 0; i < n; ++i) {
			if (id[i]) cout << s[i] << endl;
		}
	} else {
		//¿¼ÂÇcountsµÄµ¥¸´Êý 
		if (n == 1)
			cout << "There is 1 account and no account is modified\n";
		else 
			cout << "There are " << n << " accounts and no account is modified\n";
	}
	return 0; 
} 
