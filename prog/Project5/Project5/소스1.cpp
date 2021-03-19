#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num[3];
	int i,max=0;
	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}
	for (i = 0; i < 3; i++) {
		if (max < num[i]) {
			max = num[i];
		}
	}
	printf("%d\n", max);
}


/*int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if()
}*/