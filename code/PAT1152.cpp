#include <cstdlib>
#include <iostream>
using namespace std;
/* 
�ӵ㣺
1.���������������Ӵ�������������x��
��0002�������2����𰸴���
2.i��n-kΪֹ���������  
�ʼǣ�
s.substr(10, 5) //���±�5��ʼ��ȡ����5���Ӵ�
atoi(s.substr(i, k).c_str()) 
*/ 
bool isprime(int x) {
	if (x==0 || x==1) return false;
	for (int i = 2; i*i <= x; i++) 
		if (x % i == 0) return false;
	
	return true;
}
int main() {
	string s;
	int n, k;
	cin >> n >> k >> s;
	int flag = 0;
	for (int i = 0; i <= n-k; i++) {  //-k+1 ��ֹ��� 
		int x = atoi(s.substr(i, k).c_str());
		if (isprime(x)) {
			cout << s.substr(i, k) << endl;
			flag = 1;
			break;
		} 			
	}
	if (!flag) cout << "404\n";
	
	return 0;
} 
