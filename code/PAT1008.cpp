#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int n, f1, f2, first = 1, sum = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		if (first) {
			cin >> f1;
			sum += f1 * 6;
			first = 0;
		} else {
			cin >> f2;
			if (f2 > f1) {
				sum += (f2 - f1) * 6;
			} else if (f2 < f1) {
				sum += (f1 - f2) * 4;
			}
			f1 = f2;
		}
	}
	sum += n * 5;
	cout << sum << endl;
	return 0;
} 
