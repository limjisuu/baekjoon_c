# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int num;
	char input[100];
	int sum = 0;

	scanf("%d", &num);
	scanf("%s", input);

	for (int i = 0; i < num; i++) {
		sum += input[i] - 48; // ASCII ������ ���ڿ� -> ���ڴ� 48 ����
	}

	printf("%d", sum);
	return 0;
}