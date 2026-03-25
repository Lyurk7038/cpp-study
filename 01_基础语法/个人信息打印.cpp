#include <stdio.h>
int main(){
	int age;
	float height;
	char gender;
	char name [20];
	printf("请输入年龄:");
	scanf("%d", &age);
	printf("请输入身高:");
	scanf("%f", &height);
	printf("请输入性别:");
	scanf(" %c", &gender);
	printf("请输入姓名:");
	scanf(" %s", name);
	printf("%d, %f, %c, %s", age, height, gender, name);
	return 0;
}
