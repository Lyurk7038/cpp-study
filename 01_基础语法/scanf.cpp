#include <stdio.h>
int main() {
	int k;
	double l;
	char m;
	printf("请输入一个整数:");
	scanf("%d", &k);
	printf("请输入一个小数:");
	scanf("%lf", &l);
	printf("请输入一个字符:");
	scanf(" %c", &m);
	printf("你输入的: k=%d, 1=%lf, m=%c\n", k, l, m);
	return 0;
}
