# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdbool.h>

int main(void) {
	int count[42] = { 0, };
	int input;
	int diff = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		count[input % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (count[i] != 0)
			diff++;
	}

	printf("%d", diff);
	return 0;
}