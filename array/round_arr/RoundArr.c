#include <stdio.h>

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int length = sizeof(arr)/sizeof(int);
	
	int arrOut[length] = {0};
	
	int t = 0;
	scantf("%d", &t);
	printf("times of rounds：%d", t);
	
	for (int i = 0; i < length; i++){
		arrOut[(i + t)%length] = arr[i];
	}
	
	for (int i = 0; i < length; i++){
		printf("%d ", arrOut(i));
	}

	return 0;
}













