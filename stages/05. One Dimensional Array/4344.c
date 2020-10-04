# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int num;
	int student_num;
	int score[1000];
	int sum = 0;
	double avg;
	int count = 0;
	double percent[1000];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &student_num);
		for (int j = 0; j < student_num; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}

		avg = (double)sum / (double)student_num;
		for (int h = 0; h < student_num; h++) {
			if (score[h] > avg) {
				count++;
			}
		}
		percent[i] = (double)count / (double)student_num * 100;
		sum = 0; 
		count = 0;
	}

	for (int i = 0; i < num; i++) {
		printf("%.3f%\n", percent[i]);
	}
	return 0;
}