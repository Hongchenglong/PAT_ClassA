#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c;
	int q[10];
	cin >> a >> b;
	c = a + b;
	if (c < 1000 && c > -1000) cout << c;
	else {
		int cnt = 0, temp;
		while (c >= 1000 || c <= -1000) {
			temp = c % 1000;
			if (temp < 0) temp = -temp;
			q[cnt++] = temp;
			c /= 1000;
		}
		cout << c;
		for (int i = --cnt; i >= 0; i--) {
			printf(",%03d", q[i]);
		}
		cout << endl;
	}
	return 0;
} 
