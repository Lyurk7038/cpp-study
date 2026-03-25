#include <stdio.h>
int main() {
	float a;
	float b;
	printf("请输入第一个数:");
	scanf("%f", &a);
	printf("请输入第二个数:");
	scanf("%f", &b);
	printf("a + b = %.2f\n", a+b);
	printf("a - b = %.2f\n", a-b);
	printf("a * b = %.2f\n", a*b);
	printf("a / b = %.2f\n", a/b);
	return 0;	
}
