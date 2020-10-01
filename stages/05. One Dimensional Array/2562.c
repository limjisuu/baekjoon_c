# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int arr[9];
	int max = 0;
	int idx = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			idx = i + 1;
		}
	}
	printf("%d\n%d", max, idx);
	return 0;
}