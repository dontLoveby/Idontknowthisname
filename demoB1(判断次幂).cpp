// 判断a是否是二的次幂，是返回是二的几次幂，否返回0
#include<iostream>

int f(long long arg = 0) {
	int sum = 0;
	while (arg > 1) {
		if (arg >> 1 << 1== arg) {
			arg = arg >> 1;
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

// 示例程序
long long a;
long long f(long long arg);
int main()
{
	std::cin >> a;
	std::cout << f(a) << std::endl;
	return 0;
}
