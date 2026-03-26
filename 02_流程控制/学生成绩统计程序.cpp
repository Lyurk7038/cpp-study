#include <stdio.h>
int main() {
	int n;
	int score[50];
	int sum;
	float avg;
	int max, min;
	int i;
	printf("请输入学生的人数:");
	scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("请输入第%d个成绩:", i+1);
        scanf("%d", &score[i]);
	}
	sum = 0;
	max =score[0];
	min =score[0];
	for(i=0; i<n; i++) {
		sum = sum + score[i];
		if(score[i] > max) {
		    max = score[i];
	}
		if(score[i] < min) {
		    min = score[i];
	}
	}
		avg = (float)sum / n;
		printf("总分: %d\n", sum);
		printf("平均分: %.1f\n", avg);
		printf("最高分: %d\n", max);
		printf("最低分: %d\n", min);
	return 0;
}
