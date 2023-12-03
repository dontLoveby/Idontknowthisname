// 判断a是否是二的次幂，是返回是二的几次幂，否返回0
using namespace std;
#include<iostream>
int sum;
long long a;
long long f(long long a);
int main()
{
	cin >> a;
	cout << f(a) << endl;
	return 0;
}

long long f(long long a = 0) {
	// 判断a是否是二的次幂，是返回是二的几次幂，否返回0
	while (a > 1) {
		if (a >> 1 << 1== a) {
			a = a >> 1;
			sum++;
		} else {
		 	sum = 0;
			break;
		}
	}
	if (a != 1) {
		sum = 0;
	}
	return sum;
}
