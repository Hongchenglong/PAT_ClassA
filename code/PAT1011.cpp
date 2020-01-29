#include <stdio.h>
#include <iostream>
using namespace std;
/*
每场都取赔率最高的，然后相乘求积。利润=（三场赔率积×65%?1)×2
*/ 
int main() {
	char game[3];
	double w, t, l, ans = 1;
	for (int i = 0; i < 3; ++i) {
		cin >> w >> t >> l;
		if (w > t && w > l) {
			ans *= w;
			game[i] = 'W';
		} else if (t > w && t > l) {
			ans *= t;
			game[i] = 'T';
		} else if (l > w && l > t) {
			ans *= l;
			game[i] = 'L';
		}
	}
	for (int i = 0; i < 3; ++i) {
		printf("%c ", game[i]);
	}
	ans = (ans * 0.65 - 1) * 2;
	printf("%.2lf\n", ans);
	return 0;
} 
