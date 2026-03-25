#include <stdio.h>
int main() {
	int c = 10;
	int d =-1;
	printf("c的二进制(内存):");
	unsigned char *p = (unsigned char *)&c;
	for (int i=0; i < 4; i++){
		printf("%02x",p[i]);
	}
	printf("\nd的二进制(内存):");
	p = (unsigned char *)&d;
	for (int i = 0; i < 4; i++){
		printf("%02x",p[i]);
	}
	return 0;
}
