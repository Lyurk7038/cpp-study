#include <stdio.h>
int main() {
	int arr[6] = {12, 45, 7, 29, 33, 18};
	int max = arr[0];
	int min = arr[0];
	int i;
	
	for (i=1; i<6; i++){
		if(arr[i] > max) {
			max = arr[i];
	}
	    if(arr[i] < min) {
	    	min = arr[i];
	}
}

            printf("最大值:%d", max);
            printf("最小值:%d", min);
    return 0;
}
