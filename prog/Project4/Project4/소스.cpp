#include <stdio.h>

int makeInt(int num) {
	int a = 1;
	while (1) {
		if (num == 1) {
			return(a);
		}
		else if (num % 2 == 0) {
			num = num / 2;
			a++;
		}
		else if (num % 2 == 1) {
			num = (num * 3) + 1;
			a++;
		}
	}
}


int main(void) {
	int a, b, length, Long = 0, MaxNum;
	scanf_s("%d %d", &a, &b);
	int i;
	for (i = a, MaxNum = a; i <= b; i++) {
		length = makeInt(i);
		if (length > Long) {
			Long = length;
			MaxNum = i;
		}
	}
	printf("%d %d", MaxNum, Long);

	return 0;
}