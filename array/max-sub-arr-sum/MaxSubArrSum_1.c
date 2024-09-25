//
// Created by Oliver on 2024/9/24.
//
#include <stdio.h>

int subArrSum(int[], int);

int main() {

    int arr[] = {5,4,-1,7,8};

    int length = sizeof(arr) / sizeof(typeof(arr[0]));
    int maxArrSum = *arr;

    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            int max = subArrSum(&arr[i], j - i + 1);
            maxArrSum = maxArrSum < max ? max : maxArrSum;
        }
    }
    printf("maxArrSum=%d\n", maxArrSum);
}

int subArrSum(int *start, int length) {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum = sum + *(start + i);
    }
    return sum;
}