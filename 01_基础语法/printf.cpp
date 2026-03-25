#include <stdio.h>
int main() {
	int h = 100;
	float i = 3.14f;
	char j = 'B';
	printf("正确: h=%d, i=%f, j=%f\n", h, i, j);
	printf("错误: h用%%f打印:%f\n",h);
	printf("错误: i用%%d打印:%d\n",i);
	return 0;
}
