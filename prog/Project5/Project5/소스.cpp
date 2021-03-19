#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*int main(void) {
	int score;
	printf("과목의 점수를 입력하세요:");
	scanf("%d", &score);

	if (score >= 90)printf("수\n");
	else if (score >= 80)printf("우\n");
	else if (score >= 70)printf("미\n");
	else if (score >= 60)printf("양\n");
	else printf("가\n");

	return 0;
}	*/

/*int main(void) {
	int a, b, c,k ;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		if (b > c)printf("%d\n",b);
		else printf("%d\n",c);
	}
	if (b > a && b > c) {
		if (a > c)printf("%d\n",a);
		else printf("%d\n",c);
	}
	if (c > b && c > a) {
		if (a > b)printf("%d\n",a);
		else printf("%d\n",b);
	}
}*/

/*int main(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a / b > c / d)printf(">\n");
	if (a / b == c / d)printf("=\n");
	if (a / b < c / d)printf("<\n");

	return 0;
}*/

/*int main(void) {
	int a, b, c, Max;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		if (a - (b + c) > 0)printf("yes\n");
		else printf("no\n");
	}
	if (b>a && b > c) {
		if (b - (a + c) > 0)printf("yes\n");
		else printf("no\n");
	}
	if (c > b && c > a) {
		if (c - (b + a) > 0)printf("yes\n");
		else printf("no\n");
	}

	
}*/

/*int main(void) {
	int age,pay;
	scanf("%d", &age);
	if ((0 <= age && age <= 3) || (age >= 65))pay = 0;
	else if (age <= 13)pay = 500;
	else if (age <= 19)pay = 750;
	else pay = 1000;

	printf("최종요금 %d 원\n",pay);
	return 0;
}*/
/*#include <stdlib.h>
#include <time.h>
int main(void) {
	srand(time(NULL));
	int random = 0;
	random %= 899;
	random += 100;
	printf("랜덤게임 시작\n");
	do {
		printf("숫자를 입력하세요!(100~999)\n");
		if(random)
	} while (1);
	

}








*/

