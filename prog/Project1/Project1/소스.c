#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	int i=0;
	while (1) {
		if (b >= c) {
			printf("%d", -1);
			break;
		}
		a += b;
		i++;
		if (a < c * i) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}

































/*
int main(void) {
	int ki[9];
	int i, j, k,l,avg=0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &ki[i]);
	}
	for (i = 0; i < 9; i++) {
		avg += ki[i];
	}

	for (i = 0; i < 9; i++) {
		for (j = i+1; j < 9; j++) {
			if (ki[i] > ki[j]) {
				k = ki[i];
				ki[i] = ki[j];
				ki[j] = k;
			}
		}
	}
	

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (i == j) continue;
			else if (avg - (ki[i] + ki[j]) == 100) {
				k = i;
				l = j;
				break;
			}
				
		}
	}
	for (i = 0; i < 9; i++) {
			if (i == k || i == l) continue;
			printf("%d\n", ki[i]);
	}
	
	return 0;
}*/



