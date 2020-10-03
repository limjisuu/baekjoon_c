# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int num;
	int score[1000];
	double new_score[1000];
	int max = 0;
	double sum = 0;
	double average;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &score[i]);
		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0; i < num; i++) {
		new_score[i] = (double)score[i] / (double)max * 100;
		sum += new_score[i];
	}

	average = sum / num;
	printf("%.2f", average);
	return 0;
}