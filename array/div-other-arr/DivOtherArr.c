//
// Created by Oliver on 2024/9/25.
//
#include <stdio.h>
#include <malloc.h>

int main() {
    int arr[] = {2,4,1,0,3};
    int length = sizeof(arr) / sizeof(typeof(*arr));

    int *pre = malloc(sizeof(arr));
    pre[0] = 1;
    for (int i = 1; i < sizeof(arr) / sizeof(typeof(*arr)); ++i) {
        pre[i] = pre[i - 1] * arr[i - 1];
    }

    int *suf = malloc(sizeof(arr));
    suf[length-1] = 1;
    for (int i = length - 2; i >= 0; --i) {
        suf[i] = suf[i + 1] * arr[i + 1];
    }

    for (int i = 0; i < length; i++) {
        printf("%d ", pre[i] * suf[i]);
    }

};