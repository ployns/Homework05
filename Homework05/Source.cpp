#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a < 0) {
		printf("Error\n");
		printf("Try again");
	}
	else if (a >= 0 && a < 20) {
		printf("You get F\n");
		printf("Fighting!!");
	}
	else if (a >= 20 && a < 40) {
		printf("You get D\n");
		printf("Fighting!!");
	}
	else if (a >= 40 && a < 60) {
		printf("You get C\n");
		printf("Fighting!!");
	}
	else if (a >= 60 && a < 80) {
		printf("You get B\n");
		printf("Fighting!!");
	}
	else if (a >= 80 && a < 100) {
		printf("You get A\n");
		printf("Amazing!!");
	}
	else
		printf("Too more..");
}