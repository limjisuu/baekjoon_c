# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int counts[10] = { 0, };
	int num1, num2, num3, result;
	char temp[10];
	scanf("%d\n", &num1);
	scanf("%d\n", &num2);
	scanf("%d", &num3);
	result = num1 * num2 * num3;
	sprintf(temp, "%d", result);

	for (int i = 0; i < 10; i++) {
		if (temp[i] == '0')
			counts[0]++;
		if (temp[i] == '1')
			counts[1]++;
		if (temp[i] == '2')
			counts[2]++;
		if (temp[i] == '3')
			counts[3]++;
		if (temp[i] == '4')
			counts[4]++;
		if (temp[i] == '5')
			counts[5]++;
		if (temp[i] == '6')
			counts[6]++;
		if (temp[i] == '7')
			counts[7]++;
		if (temp[i] == '8')
			counts[8]++;
		if (temp[i] == '9')
			counts[9]++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", counts[i]);
	}

	return 0;
}