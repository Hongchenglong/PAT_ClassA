#include <cstdlib>
#include <iostream>
using namespace std;
/* 
坑点：
1.如果是素数，输出子串，而不是数字x，
如0002，会输出2，则答案错误。
2.i到n-k为止，否则溢出  
笔记：
s.substr(10, 5) //从下标5开始截取长度5的子串
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
	for (int i = 0; i <= n-k; i++) {  //-k+1 防止溢出 
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
