#include <cstdio>
#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
	char ch[2];
	char date[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"}; 
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	int lena = a.size(), i, HH, MM;
	for (i = 0; i < lena; ++i) {
		if ('A' <= a[i] && a[i] <= 'G' && a[i] == b[i]) { //1-7 A-G 
			ch[0] = a[i];
			break;
		}
	}
	for (++i; i < lena; ++i) { //注意要再++i, 否则还是在上个相等的位置 
		if ('0' <= a[i] && a[i] <= '9' && a[i] == b[i]) {
			ch[1] = a[i];
			HH = ch[1] - '0';
			break;
		} else if ('A' <= a[i] && a[i] <= 'N' && a[i] == b[i]) {
			ch[1] = a[i];
			HH = ch[1] - 'A' + 10;
			break;
		}
	}
	int lenc = c.size();
	for (int i = 0; i < lenc; ++i) {
		if (c[i] == d[i] && isalpha(c[i])) {
			MM = i;
			break;
		}
	}
	cout << date[ch[0] - 'A'];
	printf(" %02d:%02d\n", HH, MM);
	return 0;
} 
