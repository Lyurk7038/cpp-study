#include <stdio.h>
int main() {
	char g = 'A';
	printf("g用%%c打印:%c\n",g);
	printf("g用%%d打印:%d\d",g);
	printf("g的内存地址:%p\n",&g);
	unsigned char *p = (unsigned char *)&g;
	printf("g的内存(十六进制): %02x\n",*p);
	return 0;
} 
