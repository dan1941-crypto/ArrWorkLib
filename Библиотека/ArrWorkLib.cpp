#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "ArrWorkLib.h"

int* insertSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	return arr;
}

int* dirSelect(int arr[], int n, int mod) {
	if(mod = 1) {
		int minPosition, tmp;
		for (int i = 0; i < n; i++) {
			minPosition = i;
			for (int j = i + 1; j < n; j++)
				if (arr[minPosition] > arr[j])
					minPosition = j;
			tmp = arr[minPosition];
			arr[minPosition] = arr[i];
			arr[i] = tmp;
		}
	} else {

		int maxPosition, tmp;
		for (int i = 0; i < n; i++) {
			maxPosition = i;
			for (int j = i + 1; j < n; j++)
				if (arr[maxPosition] < arr[j])
					maxPosition = j;
			tmp = arr[maxPosition];
			arr[maxPosition] = arr[i];
			arr[i] = tmp;
		}
	}
	return arr;
}

int* ManArrEntr(int d) {
	int *arr = (int*)malloc(sizeof(int)*d);
	printf("Enter new array:\n");
	for (int i=0; i<d; i++) {
		printf("%d) ",i);
		scanf("%d",&arr[i]);
	}
	return arr;
}

int SumOfNegOdd(int arr[],int n) {
	int sum=0;
	for (int i=0; i<n; i++) {
		if((arr[i]<0)&&(arr[i]%2)) {
			sum=sum+arr[i];
		}
	}
	printf("Summ of all negative odd elements: %d\n",sum);
	return sum;
}

void WrArr(int arr[],int n) {
	printf("Sorted array:\n");
	for (int i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}