# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int num, x, input;
	scanf("%d %d", &num, &x);
	for (int i = 0; i < num; i++) {
		scanf("%d", &input);
		if (input < x) {
			printf("%d ", input);
		}
	}
	return 0;
}