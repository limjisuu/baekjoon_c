# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int num, input;
	int max = -1000000;
	int min = 1000000;
	int arr[100];

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &input);
		arr[i] = input;
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	printf("%d %d", min, max);
	return 0;
}