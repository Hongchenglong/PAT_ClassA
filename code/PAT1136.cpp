#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
/*
palindromic回文; 大数相加,考虑进位; reverse(s.begin(), s.end())
*/ 
string rev(string a) {
	reverse(a.begin(), a.end());
	return a;
}
string add(string a, string b) {
	string c = a;
	int carry = 0;
	for (int i = a.length()-1; i >= 0; --i) {
		c[i] = (a[i] + b[i] - 2*'0' + carry) % 10 + '0';
		carry = (a[i] + b[i] - 2*'0' + carry) / 10;
	}
	if (carry) c = "1" + c;
	return c; 
}
int main() {
	string a, b;
	cin >> a;
	b = rev(a);
	if (a == b) {
		cout << a << " is a palindromic number.\n";
		return 0;
	}
		
	int n = 10, flag = 1;
	while (n--) {
		string sum = add(a, b);
		cout << a << " + " << b << " = " << sum << endl;
		a = sum;
		b = rev(sum);
		if (a == b) {
			cout << a << " is a palindromic number.\n";
			flag = 0;
			break;
		}			
	}
	if (flag)
		cout << "Not found in 10 iterations.\n";
	return 0;
} 


