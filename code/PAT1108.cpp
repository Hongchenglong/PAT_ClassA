#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;
/*
sscanf(const char *buffer, const char *format, ...) sprintf()
������scanf��printf, ���ַ���*buffer�����������
sprintf(b, "%x", num)�������ڽ���ת��%x %o 
ע�⣺number�ĵ�������ʽ
�ʼǣ�decimalС��
*/
int main() {
	char a[100], b[100];
	int n, cnt = 0;
	double sum = 0, num;
	scanf("%d", &n);
	for (int i =0; i < n; i++) {
		cin >> a;
		sscanf(a, "%lf", &num); 
		sprintf(b, "%.2lf", num); 
		int lena = strlen(a), flag = 0;
		//a=5 b=5.00
		for (int j = 0; j < lena; j++) {
			if (a[j] != b[j]) {
				flag = 1;
				break;
			}
		}
		if (flag || num<-1000 || num>1000) {
			printf("ERROR: %s is not a legal number\n", a);
			continue;
		}
		sum += num;
		cnt++;
	}
	if (cnt == 1) 
		printf("The average of 1 number is %.2lf\n", sum/cnt);
	else if (cnt) 
		printf("The average of %d numbers is %.2lf\n", cnt, sum/cnt);
	else 
		cout << "The average of 0 numbers is Undefined\n";

	return 0;
} 
