# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int num1, num2;
	while (1) {
		scanf("%d %d", &num1, &num2);
		if (num1 != 0 && num2 != 0) {
			printf("%d\n", num1 + num2);
		}
		else
			break;
	}
	return 0;
}